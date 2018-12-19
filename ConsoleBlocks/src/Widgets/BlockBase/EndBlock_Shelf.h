#pragma once

#include <CBBaseBlock.h>
#include "ui_EndBlock_Shelf.h"
#include <EndBlock_Canvas.h>
#include <Canvas.h>

class EndBlock_Shelf : public CBBaseBlock
{
	Q_OBJECT

public:
	EndBlock_Shelf(QWidget *parent = Q_NULLPTR);
	~EndBlock_Shelf();
	void mousePressEvent(QMouseEvent *e);
	void mouseReleaseEvent(QMouseEvent *e);
private:
	Ui::EndBlock_Shelf ui;
};
