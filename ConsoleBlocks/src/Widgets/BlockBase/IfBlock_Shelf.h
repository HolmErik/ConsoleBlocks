#pragma once

#include <CBBaseBlock.h>
#include "ui_IfBlock_Shelf.h"

class IfBlock_Shelf : public CBBaseBlock
{
	Q_OBJECT

public:
	IfBlock_Shelf(QWidget *parent = Q_NULLPTR);
	~IfBlock_Shelf();

private:
	Ui::IfBlock_Shelf ui;
};
