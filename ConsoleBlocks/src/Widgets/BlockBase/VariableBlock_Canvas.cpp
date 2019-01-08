#include "VariableBlock_Canvas.h"

VariableBlock_Canvas::VariableBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);

	inputName = findChild<QPlainTextEdit*>("InputName");
	inputValue = findChild<QPlainTextEdit*>("InputValue");
	blocktype = blockType::VAR;
}

QString VariableBlock_Canvas::getInputName() const
{
	return inputName->toPlainText();
}


VariableBlock_Canvas::~VariableBlock_Canvas()
{
}

std::string VariableBlock_Canvas::getCodeLine()
{
	std::string code;
	code += "var " + inputName->toPlainText().toStdString() + " = ";
	std::string inString = inputValue->toPlainText().toStdString();
	bool isNumber = std::all_of(inString.begin(), inString.end(), ::isdigit);

	if (!isNumber)
	{
		//check if input is name of other var
		if (CompareToEarlierStrings(inString))
		{
			code += inString;
		}
		else
		{
			code += "\"" + inString + "\"";
		}
	}
	else
	{
		code += inString;
	}

	code += ";";
	return code;
}

bool VariableBlock_Canvas::CompareToEarlierStrings(const std::string &a) const
{
	CBBaseBlock *tmp = this->GetPreviousBlock();
	VariableBlock_Canvas *tmpVB = nullptr;
	while (tmp != nullptr)
	{
		if (tmp->blocktype == blockType::VAR)
		{
			tmpVB = (VariableBlock_Canvas*)tmp;
			if (a == tmpVB->getInputName().toStdString())
			{
				return true;
			}
		}

		tmp = tmp->GetPreviousBlock();
	}
	return false;
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
