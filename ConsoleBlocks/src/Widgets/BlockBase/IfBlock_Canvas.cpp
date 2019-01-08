#include "IfBlock_Canvas.h"

IfBlock_Canvas::IfBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
	dropDown = findChild<QComboBox*>("DropDown");
	param0 = findChild<QPlainTextEdit*>("Param0");
	param1 = findChild<QPlainTextEdit*>("Param1");

	QStringList operators;
	operators.push_back(tr("SAME AS"));
	operators.push_back(tr("BIGGER THAN"));
	operators.push_back(tr("SMALLER THAN"));
	operators.push_back(tr("NOT SAME AS"));
	dropDown->insertItems(0, operators);

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
	else if (dropDown->currentIndex() == 1) //Större
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
void IfBlock_Canvas::mouseReleaseEvent(QMouseEvent* e)
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
