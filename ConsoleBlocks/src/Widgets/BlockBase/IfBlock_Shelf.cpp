#include "IfBlock_Shelf.h"

IfBlock_Shelf::IfBlock_Shelf(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
}

IfBlock_Shelf::~IfBlock_Shelf()
{
}


void IfBlock_Shelf::mousePressEvent(QMouseEvent *e)
{
	if (e->buttons() & Qt::LeftButton)
	{
	}
}

void IfBlock_Shelf::mouseReleaseEvent(QMouseEvent *e)
{
	//depending on what block this function will look different
	if (QWidget::window()->childAt(e->windowPos().x(), e->windowPos().y())->underMouse())//if widget under mouse is under mouse??
	{
		if (this->parentWidget()->objectName() == tr("BlockShelf_Layout"))
		{
			Canvas::CreateBlock<IfBlock_Canvas>();
			//this->layout()->addWidget(n);
			//n->setParent(CBBaseBlock::canvas);
		}
	}
}