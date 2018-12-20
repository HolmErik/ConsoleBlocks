#include "PrintBlock_Canvas.h"


PrintBlock_Canvas::PrintBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
	inputValue = findChild<QTextEdit*>("TE");
	dropDown = findChild<QComboBox*>("DropDown");

	int i = 0;
	QStringList operators;
	operators.push_back(tr("Text"));
	operators.push_back(tr("Variabel"));
	dropDown->insertItems(i++, operators);
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
	std::string code = "CBPrint(";

	if (dropDown->currentIndex() == 0) //Text
	{
		code +=  "\"" + inputValue->toPlainText().toStdString() + "\"";
	}
	else if (dropDown->currentIndex() == 1) //Variabel
	{
		code += inputValue->toPlainText().toStdString();
	}
	code += ");";
	// CBPrint(A);
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