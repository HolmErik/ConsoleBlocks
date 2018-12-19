#include "Canvas.h"

QWidget* Canvas::me = nullptr;
CBBaseBlock* Canvas::startBlock = nullptr;
QWidget* Canvas::blockParent = nullptr;

Canvas::Canvas(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	if (me == nullptr)
		me = this;
	else
		delete this;


	blockParent = me->findChild<QWidget*>("BlockParent");
}


CBBaseBlock* Canvas::FindLastBlock()
{
	CBBaseBlock* tmp = startBlock;
	while (true)
	{
		if (tmp->GetNextBlock() == nullptr)
			break;
		else
			tmp = tmp->GetNextBlock();
	}
	return tmp;
}

Canvas::~Canvas()
{

}
