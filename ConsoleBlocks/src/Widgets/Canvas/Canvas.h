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
	static QWidget *blockParent;

	template<class T>
	static void CreateBlock()
	{
		T *n = new T(blockParent);
		blockParent->layout()->addWidget(n);
		CBBaseBlock* b = FindLastBlock();
		b->SetNextBlock(n);
		n->SetPreviousBlock(b);
		n->UpdateBlock();
	}


	static void DeleteBlock(CBBaseBlock* block);
	static void UpdateAllBlocks();

private:
	static QWidget* me;
	Ui::Canvas ui;


	static CBBaseBlock* FindLastBlock();



};
