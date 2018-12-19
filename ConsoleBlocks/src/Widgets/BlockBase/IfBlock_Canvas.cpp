#include "IfBlock_Canvas.h"

IfBlock_Canvas::IfBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
	dropDown = findChild<QComboBox*>("DropDown");
	param0 = findChild<QPlainTextEdit*>("Param0");
	param1 = findChild<QPlainTextEdit*>("Param1");

	int i = 0;
	QStringList operators;
	operators.push_back(tr("Lika med"));
	operators.push_back(tr("st�rre �n"));
	operators.push_back(tr("mindre �n"));
	dropDown->insertItems(i++, operators);

}

IfBlock_Canvas::~IfBlock_Canvas()
{
}

std::string IfBlock_Canvas::getCodeLine()
{
	std::string code;
	code += "if(" + param0->toPlainText().toStdString();
	if (true) //LIKA MED
	{
		code +=  "==";
	}
	else if (false) //St�rre
	{
		code += ">";
	}
	else if (false) //MINDRE
	{
		code += "<";
	}
	code += param1->toPlainText().toStdString() + ") \n {";
	return code;
}
