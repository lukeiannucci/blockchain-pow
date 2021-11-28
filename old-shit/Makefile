
output: Block.o Blockchain.o Miner.o PoW.o Puzzle.o Sha256.o Transaction.o TransactionPool.o Wallet.o WalletManager.o
	g++ Block.o Blockchain.o Miner.o PoW.o Puzzle.o Sha256.o Transaction.o TransactionPool.o Wallet.o WalletManager.o -lpthread -g -o c

Block.o: Block.cpp Block.h
	g++ -g -c Block.cpp

Blockchain.o: Blockchain.cpp Blockchain.h
	g++ -g -c Blockchain.cpp

Miner.o: Miner.cpp Miner.h
	g++ -g -c Miner.cpp

PoW.o: PoW.cpp
	g++ -g -c PoW.cpp

Puzzle.o: Puzzle.cpp Puzzle.h
	g++ -g -c Puzzle.cpp

Sha256.o: Sha256.cpp Sha256.h
	g++ -g -c Sha256.cpp

Transaction.o: Transaction.cpp Transaction.h
	g++ -g -c Transaction.cpp

TransactionPool.o: TransactionPool.cpp TransactionPool.h
	g++ -g -c TransactionPool.cpp

Wallet.o: Wallet.cpp Wallet.h
	g++ -g -c Wallet.cpp

WalletManager.o: WalletManager.cpp WalletManager.h
	g++ -g -c WalletManager.cpp

clean:
	rm *.o c