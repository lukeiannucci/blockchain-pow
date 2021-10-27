#include "Block.h"

Block::Block() {
	this->currentHash = "";
	this->previousHash = "";
	this->input = "";
	this->proposedTransactions = nullptr;
}

Block::Block(string currentHash, string input, Transaction* transactions) {
	this->currentHash = currentHash;
	this->input = input;
	this->proposedTransactions = transactions;
}

string Block::getCurrentHash() {
	return this->currentHash;
}

void Block::setCurrentHash(string currentHash) {
	this->currentHash = currentHash;
}

string Block::getPreviousHash() {
	return this->previousHash;
}

void Block::setPreviousHash(string previousHash) {
	this->previousHash = previousHash;
}

void Block::addTransactionsToBlock() {
	for (int i = 0; i < MAX_TRANSACTIONS_PER_BLOCK; i++) {
		auto transaction = this->proposedTransactions[i];
		string hash = sha256(transaction.toString());
		transaction.setTransactionHash(hash);
		this->transactions.insert(pair<string, Transaction>(hash, transaction));
	}
}

string Block::getInput() {
	return this->input;
}

Transaction* Block::getProposedTransactions() {
	return this->proposedTransactions;
}

void Block::setProposedTransactions(Transaction* transactions) {
	this->proposedTransactions = transactions;
}

void Block::setInput(string input) {
	this->input = input;
}