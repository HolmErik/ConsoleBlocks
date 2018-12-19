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
	operators.push_back(tr("�r lika med"));
	operators.push_back(tr("�r st�rre �n"));
	operators.push_back(tr("�r mindre �n"));
	operators.push_back(tr("Inte �r samma"));
	dropDown->insertItems(i++, operators);

}

IfBlock_Canvas::~IfBlock_Canvas()
{
}

std::string IfBlock_Canvas::getCodeLine()
{
	std::string code;
	code += "if(" + param0->toPlainText().toStdString();
	if (dropDown->currentIndex() == 0) //LIKA MED
	{
		code +=  "==";
	}
	else if (dropDown->currentIndex() == 1) //St�rre
	{
		code += ">";
	}
	else if (dropDown->currentIndex() == 2) //MINDRE
	{
		code += "<";
	}
	else if (dropDown->currentIndex() == 3) //OLIKA
	{
		code += "!=";
	}
	code += param1->toPlainText().toStdString() + ") \n {";
	return code;
}
