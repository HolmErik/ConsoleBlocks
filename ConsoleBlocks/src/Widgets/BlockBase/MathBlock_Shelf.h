#pragma once

#include <CBBaseBlock.h>
#include "ui_MathBlock_Shelf.h"
#include <Canvas.h>
#include <MathBlock_Canvas.h>

class MathBlock_Shelf : public CBBaseBlock
{
	Q_OBJECT

public:
	MathBlock_Shelf(QWidget *parent = Q_NULLPTR);
	~MathBlock_Shelf();
	void mousePressEvent(QMouseEvent *e);
	void mouseReleaseEvent(QMouseEvent *e);
private:
	Ui::MathBlock_Shelf ui;
};
