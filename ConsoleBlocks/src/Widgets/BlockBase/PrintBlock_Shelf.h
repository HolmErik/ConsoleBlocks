#pragma once

#include <CBBaseBlock.h>
#include "ui_PrintBlock_Shelf.h"
#include <Canvas.h>
#include <PrintBlock_Canvas.h>

class PrintBlock_Shelf : public CBBaseBlock
{
	Q_OBJECT

public:
	PrintBlock_Shelf(QWidget *parent = Q_NULLPTR);
	~PrintBlock_Shelf();
	void mousePressEvent(QMouseEvent *e);
	void mouseReleaseEvent(QMouseEvent *e);

private:
	Ui::PrintBlock_Shelf ui;
};
