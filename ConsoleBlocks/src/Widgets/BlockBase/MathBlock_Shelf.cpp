#include "MathBlock_Shelf.h"

MathBlock_Shelf::MathBlock_Shelf(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
}

MathBlock_Shelf::~MathBlock_Shelf()
{
}
void MathBlock_Shelf::mousePressEvent(QMouseEvent *e)
{
	if (e->buttons() & Qt::LeftButton)
	{
	}
}

void MathBlock_Shelf::mouseReleaseEvent(QMouseEvent *e)
{
	//depending on what block this function will look different
	if (QWidget::window()->childAt(e->windowPos().x(), e->windowPos().y())->underMouse())//if widget under mouse is under mouse??
	{
		if (this->parentWidget()->objectName() == tr("BlockShelf_Layout"))
		{
			Canvas::CreateBlock<MathBlock_Canvas>();
		}
	}
}
