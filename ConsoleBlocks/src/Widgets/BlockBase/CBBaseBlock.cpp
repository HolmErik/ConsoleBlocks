#include "CBBaseBlock.h"

CBBaseBlock::CBBaseBlock(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);

	QFrame *frame;
	frame = this->findChild<QFrame*>(tr("frame"));
	frame->setStyleSheet("background-color: red");
	
}

CBBaseBlock::~CBBaseBlock()
{
}
