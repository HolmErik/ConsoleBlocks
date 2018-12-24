#pragma once

#include <CBBaseBlock.h>
#include "ui_LoopBlock_Canvas.h"
#include <Canvas.h>
#include <QtWidgets/qplaintextedit.h>

class LoopBlock_Canvas : public CBBaseBlock
{
	Q_OBJECT

public:
	LoopBlock_Canvas(QWidget *parent = Q_NULLPTR);
	~LoopBlock_Canvas();
	std::string getCodeLine();
	void mouseReleaseEvent(QMouseEvent* e);

private:
	QPlainTextEdit* inParam;
	Ui::LoopBlock_Canvas ui;
};
