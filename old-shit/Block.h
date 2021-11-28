#ifndef BLOCK_H
#define BLOCK_H

#include <map>
#include "Transaction.h"
#include "Sha256.h"

using namespace std;

const unsigned int MAX_TRANSACTIONS_PER_BLOCK = 2;

class Block {
public:
	Block();
	Block(string currentHash, string input, Transaction* transactions);
	string getPreviousHash();
	string getCurrentHash();
	string getInput();
	Transaction* getProposedTransactions();
	void setCurrentHash(string currentHash);
	void setPreviousHash(string previousHash);
	void setInput(string input);
	void setProposedTransactions(Transaction* transactions);
	void addTransactionsToBlock();
	

private:
	Transaction * proposedTransactions;
	string previousHash;
	string currentHash;
	string input;
	map<string, Transaction> transactions;
};
#endif