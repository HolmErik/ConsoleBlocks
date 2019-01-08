#include "MathBlock_Canvas.h"
#include "VariableBlock_Canvas.h"

MathBlock_Canvas::MathBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
	//inParam0 = findChild<QPlainTextEdit*>("InParam0");
	inParam1 = findChild<QPlainTextEdit*>("InParam1");
	inParam2 = findChild<QPlainTextEdit*>("InParam2");
	dropDown = findChild<QComboBox*>("DropDown");
	varDropDown = findChild<QComboBox*>("VarDropDown");


	QStringList operators;
	operators.push_back(tr("plus"));
	operators.push_back(tr("minus"));
	operators.push_back(tr("gånger med"));
	operators.push_back(tr("delat med"));
	dropDown->insertItems(0, operators);
}

MathBlock_Canvas::~MathBlock_Canvas()
{
}
std::string MathBlock_Canvas::getCodeLine()
{
	std::string code;
	code += varDropDown->currentText().toStdString();
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

void MathBlock_Canvas::UpdateBlock()
{
	CBBaseBlock* tmp = this->GetPreviousBlock();
	VariableBlock_Canvas* tmp2;
	QStringList variables;
	varDropDown->clear();
	while (tmp != nullptr)
	{
		if (tmp->blocktype == blockType::VAR)
		{
			tmp2 = (VariableBlock_Canvas*)tmp;
			variables.insert(0,tmp2->getInputName());
		}
		tmp = tmp->GetPreviousBlock();
	}
	varDropDown->insertItems(0, variables);
}

