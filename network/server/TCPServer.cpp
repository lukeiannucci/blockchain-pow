#include "TCPServer.h"
#include <iostream>
using boost::asio::ip::tcp;
TCPServer::TCPServer(IPV ipv, int port) : _ipVersion(ipv), _port(port),
                                          _acceptor(_ioContext, tcp::endpoint(_ipVersion == IPV::V4 ? tcp::v4() : tcp::v6(), _port))
{
}

int TCPServer::Run()
{
  try
  {
    startAccept();
    _ioContext.run();
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
    return -1;
  }
  return 0;
}

void TCPServer::Broadcast(const block::block &proposedBlock)
{
  for (auto &connection : _connections)
  {
    std::cout << "Posting to connection: " + connection->GetUsername() + "\n";
    connection->Post(proposedBlock);
  }
}

void TCPServer::startAccept()
{
  _socket.emplace(_ioContext);

  // asynchronously accept the connection
  _acceptor.async_accept(*_socket, [this](const boost::system::error_code &error)
                         {
                           auto connection = TCPConnection::Create(std::move(*_socket));

                           if (OnJoin)
                           {
                             OnJoin(connection);
                           }

                           _connections.insert(connection);
                           if (!error)
                           {
                             connection->Start(
                                 [this](const std::string &message)
                                 {
                                   if (OnClientMessage)
                                     OnClientMessage(message);
                                 },
                                 [&, weak = std::weak_ptr(connection)]
                                 {
                                   if (auto shared = weak.lock(); shared && _connections.erase(shared))
                                   {
                                     if (OnLeave)
                                       OnLeave(shared);
                                   }
                                 });
                           }

                           startAccept();
                         });
}

void TCPServer::Stop()
{
  boost::system::error_code ec;
  _acceptor.close(ec);

  if (ec)
  {
  }
}
