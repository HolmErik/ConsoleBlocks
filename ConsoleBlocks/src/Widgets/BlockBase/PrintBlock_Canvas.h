#pragma once

#include <CBBaseBlock.h>
#include "ui_PrintBlock_Canvas.h"

class PrintBlock_Canvas : public CBBaseBlock
{
	Q_OBJECT

public:
	PrintBlock_Canvas(QWidget *parent = Q_NULLPTR);
	~PrintBlock_Canvas();

private:
	Ui::PrintBlock_Canvas ui;
};
