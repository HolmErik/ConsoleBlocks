#include "PrintBlock_Canvas.h"


PrintBlock_Canvas::PrintBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
	inputValue = findChild<QTextEdit*>("TE");
}

PrintBlock_Canvas::~PrintBlock_Canvas()
{
}

std::string PrintBlock_Canvas::getCodeLine()
{
	return GetInputString();
}

std::string PrintBlock_Canvas::GetInputString()
{
	std::string code = "CBPrint(\"" + inputValue->toPlainText().toStdString() + "\");";
	return code;
}

void PrintBlock_Canvas::mouseReleaseEvent(QMouseEvent* e)
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