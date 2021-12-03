#include <iostream>
#include "server/TCPServer.h"
#include "client/TCPClient.h"
#include <thread>
#include <vector>

int main(int argc, char *argv[])
{
    int server_port = atoi(argv[1]);
    int client_port = atoi(argv[2]);
    TCPServer server{IPV::V4, server_port};

    server.OnJoin = [](TCPConnection::pointer server)
    {
        std::cout << "User has joined the server: " << server->GetUsername() << std::endl;
    };

    server.OnLeave = [](TCPConnection::pointer server)
    {
        std::cout << "User has left the server: " << server->GetUsername() << std::endl;
    };

    server.OnClientMessage = [&server](const std::string &message)
    {
        server.Broadcast(message);
    };

    TCPClient client("localhost", client_port);
    client.OnMessage = [&](const std::string &message)
    {
        std::cout << "message: " + message + "\n";
        server.Broadcast(message);
    };
    std::thread t2{[&client]()
                   { client.Run(); }};
    std::thread t{[&server]()
                  { server.Run(); }};

    while (true)
    {
        std::string message;
        getline(std::cin, message);

        if (message == "quit")
            break;
        message += "\n";

        server.Broadcast(message);
    }

    client.Stop();
    server.Stop();
    t.join();
    t2.join();
    return 0;
}