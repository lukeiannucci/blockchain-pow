output: TCPConnection.o TCPServer.o Server.o
	g++ TCPServer.o TCPConnection.o Server.o -lboost_system -lpthread -g -o s

Server.o: Server.cpp
	g++ -g -c Server.cpp

TCPServer.o: TCPServer.cpp TCPServer.h
	g++ -g -c TCPServer.cpp

TCPConnection.o: TCPConnection.cpp TCPConnection.h
	g++ -g -c TCPConnection.cpp

clean:
	rm *.o s