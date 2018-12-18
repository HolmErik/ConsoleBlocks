#pragma once

#include <CBBaseBlock.h>
#include "ui_IfBlock_Canvas.h"

class IfBlock_Canvas : public CBBaseBlock
{
	Q_OBJECT

public:
	IfBlock_Canvas(QWidget *parent = Q_NULLPTR);
	~IfBlock_Canvas();

private:
	Ui::IfBlock_Canvas ui;
};
