#pragma once

#include "CBBaseBlock.h"
#include "ui_CBStartBlock.h"

class CBStartBlock : public CBBaseBlock
{
	Q_OBJECT

public:
	CBStartBlock(QWidget *parent = Q_NULLPTR);
	~CBStartBlock();


private:
	Ui::CBStartBlock ui;
};
