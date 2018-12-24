#pragma once

#include <CBBaseBlock.h>
#include "ui_LoopBlock_Shelf.h"
#include <Canvas.h>
#include <LoopBlock_Canvas.h>

class LoopBlock_Shelf : public CBBaseBlock
{
	Q_OBJECT

public:
	LoopBlock_Shelf(QWidget *parent = Q_NULLPTR);
	~LoopBlock_Shelf();
	void mousePressEvent(QMouseEvent *e);
	void mouseReleaseEvent(QMouseEvent *e);
private:
	Ui::LoopBlock_Shelf ui;
};
