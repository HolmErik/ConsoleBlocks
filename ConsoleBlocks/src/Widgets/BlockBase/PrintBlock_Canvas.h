#pragma once

#include <CBBaseBlock.h>
#include "ui_PrintBlock_Canvas.h"
#include "QtWidgets/qtextedit.h"
#include "Canvas/Canvas.h"
#include <QtWidgets/qcombobox.h>

class PrintBlock_Canvas : public CBBaseBlock
{
	Q_OBJECT

public:
	PrintBlock_Canvas(QWidget *parent = Q_NULLPTR);
	~PrintBlock_Canvas();
	std::string getCodeLine() override;
	void mouseReleaseEvent(QMouseEvent* e);
	void UpdateBlock();

private:
	Ui::PrintBlock_Canvas ui;
	QTextEdit *inputValue;
	QComboBox *dropDown;
	QComboBox *varDropDown;
	std::string GetInputString();
	void UpdateField();
};
