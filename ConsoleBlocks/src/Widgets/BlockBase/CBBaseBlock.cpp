#include "CBBaseBlock.h"
#include "consoleWidget/ConsoleWidget.h"


//Canvas* CBBaseBlock::canvas = nullptr;

CBBaseBlock::CBBaseBlock(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);



}

void CBBaseBlock::UpdateBlock()
{

}

CBBaseBlock::~CBBaseBlock()
{
}

CBBaseBlock* CBBaseBlock::GetNextBlock() const
{
	if(nextBlock != nullptr)
		return nextBlock;
	else return nullptr;
}


CBBaseBlock* CBBaseBlock::GetPreviousBlock() const
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

std::string CBBaseBlock::getCodeLine()
{
	return code;
}