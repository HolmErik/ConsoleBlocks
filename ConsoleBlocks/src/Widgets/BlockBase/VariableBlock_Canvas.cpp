#include "VariableBlock_Canvas.h"

VariableBlock_Canvas::VariableBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);

	inputName = findChild<QPlainTextEdit*>("InputName");
	inputValue = findChild<QPlainTextEdit*>("InputValue");
}

VariableBlock_Canvas::~VariableBlock_Canvas()
{
}

std::string VariableBlock_Canvas::getCodeLine()
{
	std::string code;
	code += "var " + inputName->toPlainText().toStdString() +  " = " + inputValue->toPlainText().toStdString() + ";";
	return code;
}

void VariableBlock_Canvas::mouseReleaseEvent(QMouseEvent * e)
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
