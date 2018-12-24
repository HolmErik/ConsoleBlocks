#include "MathBlock_Canvas.h"

MathBlock_Canvas::MathBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
	inParam0 = findChild<QPlainTextEdit*>("InParam0");
	inParam1 = findChild<QPlainTextEdit*>("InParam1");
	inParam2 = findChild<QPlainTextEdit*>("InParam2");
	dropDown = findChild<QComboBox*>("DropDown");

	int i = 0;
	QStringList operators;
	operators.push_back(tr("plus"));
	operators.push_back(tr("minus"));
	operators.push_back(tr("gånger med"));
	operators.push_back(tr("delat med"));
	dropDown->insertItems(i++, operators);
}

MathBlock_Canvas::~MathBlock_Canvas()
{
}
std::string MathBlock_Canvas::getCodeLine()
{
	std::string code;
	code += inParam0->toPlainText().toStdString();
	code += " = ";
	code += inParam1->toPlainText().toStdString();
	if (dropDown->currentIndex() == 0) //plus
	{
		code += " + ";
	}
	else if (dropDown->currentIndex() == 1)//minus
	{
		code += " - ";
	}
	else if (dropDown->currentIndex() == 2)//mult
	{
		code += " * ";
	}
	else if (dropDown->currentIndex() == 3)//div
	{
		code += " / ";
	}
	code += inParam2->toPlainText().toStdString() + ";";
	return code;
}
void MathBlock_Canvas::mouseReleaseEvent(QMouseEvent* e)
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

