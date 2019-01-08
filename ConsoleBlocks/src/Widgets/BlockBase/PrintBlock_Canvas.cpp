#include "PrintBlock_Canvas.h"
#include "VariableBlock_Canvas.h"

PrintBlock_Canvas::PrintBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
	inputValue = findChild<QTextEdit*>("TE");
	dropDown = findChild<QComboBox*>("DropDown");
	varDropDown = findChild<QComboBox*>("VarDropDown");
	
	connect(dropDown, QOverload<const QString &>::of(&QComboBox::currentIndexChanged),
			[=](const QString &text) { UpdateField(); });

	QStringList operators;
	operators.push_back(tr("Text"));
	operators.push_back(tr("Variabel"));
	dropDown->insertItems(0, operators);
}

PrintBlock_Canvas::~PrintBlock_Canvas()
{
}

void PrintBlock_Canvas::UpdateField()
{
	if (dropDown->currentIndex() == 0)
	{
		varDropDown->hide();
		inputValue->show();
	}
	else if (dropDown->currentIndex() == 1)
	{
		UpdateBlock();
		varDropDown->show();
		inputValue->hide();
	}
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
		code += "to_string(" + varDropDown->currentText().toStdString() + ")";
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
void PrintBlock_Canvas::UpdateBlock()
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
			variables.insert(0, tmp2->getInputName());
		}
		tmp = tmp->GetPreviousBlock();
	}
	varDropDown->insertItems(0, variables);
}