#pragma once

#include <QtWidgets/qwidget.h>
#include <QtWidgets/qframe.h>
#include "ui_CBBaseBlock.h"


class CBBaseBlock : public QWidget
{
	Q_OBJECT

public:
	CBBaseBlock(QWidget *parent = Q_NULLPTR);
	~CBBaseBlock();
private:
	Ui::CBBaseBlock ui;
	void mousePressEvent(QMouseEvent*);
	void mouseReleaseEvent(QMouseEvent*);

	CBBaseBlock *previousBlock;
	CBBaseBlock *nextBlock;
	std::string code;
};
 