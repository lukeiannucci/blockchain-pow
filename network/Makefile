output: TCPConnection.o TCPServer.o TCPClient.o network.o
	g++ TCPServer.o TCPConnection.o TCPClient.o network.o -lboost_system -lpthread -g -o s

network.o: network.cpp
	g++ -g -c network.cpp

TCPServer.o: server/TCPServer.cpp server/TCPServer.h
	g++ -g -c server/TCPServer.cpp

TCPConnection.o: server/TCPConnection.cpp server/TCPConnection.h
	g++ -g -c server/TCPConnection.cpp

TCPClient.o: client/TCPClient.cpp client/TCPClient.h
	g++ -g -c client/TCPClient.cpp

clean:
	rm *.o s