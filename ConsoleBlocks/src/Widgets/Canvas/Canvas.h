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
	static CBBaseBlock *startBlock;

	template<class T>
	static void CreateBlock()
	{
		T *n = new T(me);
		me->layout()->addWidget(n);
		FindLastBlock()->SetNextBlock(n);
	}


private:
	static QWidget* me;
	Ui::Canvas ui;


	static CBBaseBlock* FindLastBlock();



};
