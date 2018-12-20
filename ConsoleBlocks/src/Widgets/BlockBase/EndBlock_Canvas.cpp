#include "EndBlock_Canvas.h"

EndBlock_Canvas::EndBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
}

EndBlock_Canvas::~EndBlock_Canvas()
{
}

std::string EndBlock_Canvas::getCodeLine()
{
	return "}";
}
void EndBlock_Canvas::mouseReleaseEvent(QMouseEvent* e)
{
	if (e->button() == Qt::LeftButton)
	{
		//select this block
	}

	if (e->button() == Qt::RightButton)
	{
		Canvas::DeleteBlock(this);
	}
}
