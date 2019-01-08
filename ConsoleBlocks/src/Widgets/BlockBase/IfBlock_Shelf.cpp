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
		if (this->parentWidget()->objectName() == tr("BlockShelf_Layout") && e->button() == Qt::LeftButton)
		{
			Canvas::CreateBlock<IfBlock_Canvas>();
		}
}