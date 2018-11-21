#include "CBBaseBlock.h"

CBBaseBlock::CBBaseBlock(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);

	QFrame *frame;
	frame = this->findChild<QFrame*>(tr("frame"));
	frame->setStyleSheet("background-color: red");
	
	QFrame *box;
	box = this->findChild<QFrame*>(tr("box"));
	box->setStyleSheet("background-color: blue");

}

CBBaseBlock::~CBBaseBlock()
{
}
