#include "CBBaseBlock.h"


//Canvas* CBBaseBlock::canvas = nullptr;

CBBaseBlock::CBBaseBlock(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);



}

CBBaseBlock::~CBBaseBlock()
{
}

CBBaseBlock* CBBaseBlock::GetNextBlock()
{
	if(nextBlock)
		return nextBlock;
	else return nullptr;
}


CBBaseBlock* CBBaseBlock::GetPreviousBlock()
{
	if(previousBlock)
		return previousBlock;
	else return nullptr;
}

void CBBaseBlock::SetNextBlock(CBBaseBlock *block)
{
	nextBlock = block;
}

void CBBaseBlock::SetPreviousBlock(CBBaseBlock *block)
{
	previousBlock = block;
}