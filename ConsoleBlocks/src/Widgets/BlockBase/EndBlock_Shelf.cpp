#include "EndBlock_Shelf.h"

EndBlock_Shelf::EndBlock_Shelf(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
}

EndBlock_Shelf::~EndBlock_Shelf()
{
}
void EndBlock_Shelf::mousePressEvent(QMouseEvent *e)
{
	if (e->buttons() & Qt::LeftButton)
	{
	}
}

void EndBlock_Shelf::mouseReleaseEvent(QMouseEvent *e)
{
	//depending on what block this function will look different
	if (QWidget::window()->childAt(e->windowPos().x(), e->windowPos().y())->underMouse())//if widget under mouse is under mouse??
	{
		if (this->parentWidget()->objectName() == tr("BlockShelf_Layout"))
		{
			Canvas::CreateBlock<EndBlock_Canvas>();
		}
	}
}
