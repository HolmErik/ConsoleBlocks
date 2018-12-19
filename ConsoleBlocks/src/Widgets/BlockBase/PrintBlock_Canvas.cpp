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

std::string PrintBlock_Canvas::GetInputString()
{
	std::string code = "CBPrint(\"" + inputValue->toPlainText().toStdString() + "\");";
	return code;
}
