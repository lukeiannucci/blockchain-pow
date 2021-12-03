#include <iostream>
#include "TCPServer.h"
#include <thread>

int main(int argc, char *argv[])
{

    TCPServer server{IPV::V4, 1337};

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
        // Parse the message
        // Do game server things

        // Send message to client
        server.Broadcast(message);
    };

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
    server.Stop();
    t.join();

    return 0;
}