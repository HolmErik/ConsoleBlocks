#pragma once

#include <QtWidgets/qwidget.h>
#include <BlockBase/CBBaseBlock.h>
#include <ConsoleWidget/ConsoleWidget.h>
#include <vector>
#include "../ui_Canvas.h"

class Canvas : public QWidget
{
	Q_OBJECT

public:
	Canvas(QWidget *parent = Q_NULLPTR);
	~Canvas();
	std::vector<CBBaseBlock*> GetBlocks();
	void setConsole(ConsoleWidget* c);

private:
	Ui::Canvas ui;
	ConsoleWidget* console;
	void blocks();
};
