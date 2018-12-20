#pragma once

#include <CBBaseBlock.h>
#include "ui_IfBlock_Canvas.h"
#include <QtWidgets/qcombobox.h>
#include <QtWidgets/qplaintextedit.h>
#include <Canvas.h>

class IfBlock_Canvas : public CBBaseBlock
{
	Q_OBJECT

public:
	IfBlock_Canvas(QWidget *parent = Q_NULLPTR);
	~IfBlock_Canvas();
	std::string getCodeLine();
	void mouseReleaseEvent(QMouseEvent* e);
private:
	QPlainTextEdit *param0;
	QPlainTextEdit *param1;
	Ui::IfBlock_Canvas ui;
	QComboBox *dropDown; 
};
