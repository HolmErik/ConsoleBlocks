#pragma once

#include <QtWidgets/qwidget.h>
#include <QtWidgets/qframe.h>
#include "ui_CBBaseBlock.h"
#include <Canvas/Canvas.h>


class CBBaseBlock : public QWidget
{
	Q_OBJECT

public:
	CBBaseBlock(QWidget *parent = Q_NULLPTR);
	~CBBaseBlock();

	//static Canvas* canvas;

private:
	Ui::CBBaseBlock ui;
	virtual void mousePressEvent(QMouseEvent*);
	virtual void mouseReleaseEvent(QMouseEvent*);


	CBBaseBlock *previousBlock;
	CBBaseBlock *nextBlock;
	std::string code;

};
 