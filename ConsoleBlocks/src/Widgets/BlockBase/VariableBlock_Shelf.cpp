#include "VariableBlock_Shelf.h"

VariableBlock_Shelf::VariableBlock_Shelf(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
}

VariableBlock_Shelf::~VariableBlock_Shelf()
{
}

void VariableBlock_Shelf::mousePressEvent(QMouseEvent * e)
{
}

void VariableBlock_Shelf::mouseReleaseEvent(QMouseEvent * e)
{
	if (QWidget::window()->childAt(e->windowPos().x(), e->windowPos().y())->underMouse())
	{
		if (this->parentWidget()->objectName() == tr("BlockShelf_Layout"))
		{
			Canvas::CreateBlock<VariableBlock_Canvas>();
		}
	}
}
