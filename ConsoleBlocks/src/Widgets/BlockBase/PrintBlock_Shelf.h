#pragma once

#include <CBBaseBlock.h>
#include "ui_PrintBlock_Shelf.h"

class PrintBlock_Shelf : public CBBaseBlock
{
	Q_OBJECT

public:
	PrintBlock_Shelf(QWidget *parent = Q_NULLPTR);
	~PrintBlock_Shelf();

private:
	Ui::PrintBlock_Shelf ui;
};
