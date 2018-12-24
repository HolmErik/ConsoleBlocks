#include "LoopBlock_Canvas.h"

LoopBlock_Canvas::LoopBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
	inParam = findChild< QPlainTextEdit*>("InParam");

}

LoopBlock_Canvas::~LoopBlock_Canvas()
{
}

std::string LoopBlock_Canvas::getCodeLine()
{
	std::string code;
	code += "for(var i = 1; i <";
	code += inParam->toPlainText().toStdString();
	code += "; ++i) {"; //chai syntax loop
	return code;
}

void LoopBlock_Canvas::mouseReleaseEvent(QMouseEvent* e)
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