#pragma once

#include <CBBaseBlock.h>
#include "ui_VariableBlock_Canvas.h"
#include "QtWidgets/qplaintextedit.h"
#include <Canvas.h>

class VariableBlock_Canvas : public CBBaseBlock
{
	Q_OBJECT

public:
	VariableBlock_Canvas(QWidget *parent = Q_NULLPTR);
	~VariableBlock_Canvas();
	std::string getCodeLine() override;
	void mouseReleaseEvent(QMouseEvent* e);

private:
	QPlainTextEdit *inputName;
	QPlainTextEdit *inputValue;
	Ui::VariableBlock_Canvas ui;
};
