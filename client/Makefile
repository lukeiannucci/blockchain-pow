
output: Block.o Blockchain.o Miner.o PoW.o Puzzle.o Sha256.o Transaction.o TransactionPool.o Wallet.o WalletManager.o
	g++ Block.o Blockchain.o Miner.o PoW.o Puzzle.o Sha256.o Transaction.o TransactionPool.o Wallet.o WalletManager.o -lpthread -o output

Block.o: Block.cpp Block.h
	g++ -c Block.cpp

Blockchain.o: Blockchain.cpp Blockchain.h
	g++ -c Blockchain.cpp

Miner.o: Miner.cpp Miner.h
	g++ -c Miner.cpp

PoW.o: PoW.cpp
	g++ -c PoW.cpp

Puzzle.o: Puzzle.cpp Puzzle.h
	g++ -c Puzzle.cpp

Sha256.o: Sha256.cpp Sha256.h
	g++ -c Sha256.cpp

Transaction.o: Transaction.cpp Transaction.h
	g++ -c Transaction.cpp

TransactionPool.o: TransactionPool.cpp TransactionPool.h
	g++ -c TransactionPool.cpp

Wallet.o: Wallet.cpp Wallet.h
	g++ -c Wallet.cpp

WalletManager.o: WalletManager.cpp WalletManager.h
	g++ -c WalletManager.cpp

clean:
	rm *.o output