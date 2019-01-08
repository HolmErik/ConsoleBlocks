#pragma once

#include <CBBaseBlock.h>
#include "ui_MathBlock_Canvas.h"
#include <Canvas.h>
#include <QtWidgets/qplaintextedit.h>
#include <QtWidgets/qcombobox.h>

class MathBlock_Canvas : public CBBaseBlock
{
	Q_OBJECT

public:
	MathBlock_Canvas(QWidget *parent = Q_NULLPTR);
	~MathBlock_Canvas();
	std::string getCodeLine();
	void mouseReleaseEvent(QMouseEvent* e);
	void UpdateBlock() override;

private:
	QComboBox* dropDown;
	//QPlainTextEdit* inParam0;
	QPlainTextEdit* inParam1;
	QPlainTextEdit* inParam2;
	Ui::MathBlock_Canvas ui;


	QComboBox* varDropDown;
};
