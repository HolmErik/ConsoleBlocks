#pragma once

#include <QtWidgets/qwidget.h>
#include <QtWidgets/qframe.h>
#include "ui_ConsoleWidget.h"

class ConsoleWidget : public QWidget
{
	Q_OBJECT

public:
	ConsoleWidget(QWidget *parent = Q_NULLPTR);
	~ConsoleWidget();
	
	QLabel* label;
private:
	Ui::ConsoleWidget ui;
};
