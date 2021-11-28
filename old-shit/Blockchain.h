#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
	void addBlock();
	void displayBlockchain();
	void proposeBlock(Block* block);
	Block* getProposedBlock();
	Blockchain();
	bool getBlockAccepted();
	void setBlockAccepted(bool accepted);

private:
	Block* latestProposedBlock;
	bool blockAccepted;
	//todo is this really a vector?
	vector<Block> blockchain;
};
#endif