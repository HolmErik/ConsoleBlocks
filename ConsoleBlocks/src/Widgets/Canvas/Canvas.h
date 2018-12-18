#pragma once

#include <QtWidgets/qwidget.h>
#include <ConsoleWidget/ConsoleWidget.h>
#include <vector>
#include "../ui_Canvas.h"
#include <BlockBase/CBBaseBlock.h>
#include <BlockBase/CBStartBlock.h>

class Canvas : public QWidget
{
	Q_OBJECT

public:
	Canvas(QWidget *parent = Q_NULLPTR);
	~Canvas();
	CBBaseBlock *startBlock;


private:
	Ui::Canvas ui;
};
