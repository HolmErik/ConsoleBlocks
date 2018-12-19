#pragma once

#include <CBBaseBlock.h>
#include "ui_PrintBlock_Canvas.h"
#include "QtWidgets/qtextedit.h"

class PrintBlock_Canvas : public CBBaseBlock
{
	Q_OBJECT

public:
	PrintBlock_Canvas(QWidget *parent = Q_NULLPTR);
	~PrintBlock_Canvas();
	std::string GetInputString();

private:
	Ui::PrintBlock_Canvas ui;
	QTextEdit *inputValue;
};
