#pragma once

#include <CBBaseBlock.h>
#include "ui_EndBlock_Canvas.h"
#include <Canvas.h>

class EndBlock_Canvas : public CBBaseBlock
{
	Q_OBJECT

public:
	EndBlock_Canvas(QWidget *parent = Q_NULLPTR);
	~EndBlock_Canvas();
	std::string getCodeLine();
	void mouseReleaseEvent(QMouseEvent* e);

private:
	Ui::EndBlock_Canvas ui;
};
