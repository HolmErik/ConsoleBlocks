#pragma once

#include <QtWidgets/qwidget.h>
#include <QtWidgets/qframe.h>
#include "ui_CBBaseBlock.h"
#include "Qt3DInput/qmouseevent.h"
//#include <Canvas/Canvas.h>


class CBBaseBlock : public QWidget
{
	Q_OBJECT

public:
	CBBaseBlock(QWidget *parent = Q_NULLPTR);
	~CBBaseBlock();

	//static Canvas* canvas;

private:
	Ui::CBBaseBlock ui;


	CBBaseBlock *previousBlock = nullptr;
	CBBaseBlock *nextBlock = nullptr;
	std::string code = "";


public:
	CBBaseBlock * GetPreviousBlock();
	CBBaseBlock* GetNextBlock();
	void SetNextBlock(CBBaseBlock *block);
	void SetPreviousBlock(CBBaseBlock *block);
	virtual std::string getCodeLine();
	virtual void UpdateBlock();



	enum class blockType
	{
		UNDEFINED,
		VAR
	};

	blockType blocktype = blockType::UNDEFINED;
};
