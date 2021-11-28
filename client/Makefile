output: Client.o TCPClient.o
	g++ Client.o TCPClient.o -lboost_system -lpthread -g -o c

Client.o: Client.cpp
	g++ -g -c Client.cpp

TCPClient.o: TCPClient.cpp TCPClient.h
	g++ -g -c TCPClient.cpp

clean:
	rm *.o c