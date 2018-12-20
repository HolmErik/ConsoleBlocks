#pragma once

#include <CBBaseBlock.h>
#include "ui_VariableBlock_Shelf.h"
#include <Canvas.h>
#include <VariableBlock_Canvas.h>

class VariableBlock_Shelf : public CBBaseBlock
{
	Q_OBJECT

public:
	VariableBlock_Shelf(QWidget *parent = Q_NULLPTR);
	~VariableBlock_Shelf();

	void mousePressEvent(QMouseEvent *e);
	void mouseReleaseEvent(QMouseEvent *e);

private:
	Ui::VariableBlock_Shelf ui;
};
