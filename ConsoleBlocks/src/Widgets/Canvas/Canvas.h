#pragma once

#include <QtWidgets/qwidget.h>
#include <ConsoleWidget/ConsoleWidget.h>
#include <vector>
#include "../ui_Canvas.h"
#include <BlockBase/CBBaseBlock.h>

class Canvas : public QWidget
{
	Q_OBJECT

public:
	Canvas(QWidget *parent = Q_NULLPTR);
	~Canvas();
	void setConsole(ConsoleWidget* c);

private:
	Ui::Canvas ui;
	ConsoleWidget* console;
};
