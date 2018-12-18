#include "CBBaseBlock.h"
#include "Qt3DInput/qmouseevent.h"


//Canvas* CBBaseBlock::canvas = nullptr;

CBBaseBlock::CBBaseBlock(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);



}

CBBaseBlock::~CBBaseBlock()
{
}


void CBBaseBlock::mousePressEvent(QMouseEvent *e)
{
	if (e->buttons() & Qt::LeftButton)
	{
	}
}

void CBBaseBlock::mouseReleaseEvent(QMouseEvent *e)
{
	//depending on what block this function will look different
	if (QWidget::window()->childAt(e->windowPos().x(), e->windowPos().y())->underMouse())//if widget under mouse is under mouse??
	{
		if (this->parentWidget()->objectName() == tr("BlockShelf_Layout"))
		{
			//CBBaseBlock *n = new CBBaseBlock(this);
			//this->layout()->addWidget(n);
			//n->setParent(CBBaseBlock::canvas);
		}
	}
}