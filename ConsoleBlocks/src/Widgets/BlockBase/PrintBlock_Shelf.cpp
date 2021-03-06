#include "PrintBlock_Shelf.h"

PrintBlock_Shelf::PrintBlock_Shelf(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
}

PrintBlock_Shelf::~PrintBlock_Shelf()
{
}

void PrintBlock_Shelf::mousePressEvent(QMouseEvent *e)
{
	if (e->buttons() & Qt::LeftButton)
	{
	}
}

void PrintBlock_Shelf::mouseReleaseEvent(QMouseEvent *e)
{
	//depending on what block this function will look different
	if (QWidget::window()->childAt(e->windowPos().x(), e->windowPos().y())->underMouse())//if widget under mouse is under mouse??
	{
		if (this->parentWidget()->objectName() == tr("BlockShelf_Layout"))
		{
			Canvas::CreateBlock<PrintBlock_Canvas>();
		}
	}
}
