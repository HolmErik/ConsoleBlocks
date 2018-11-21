#pragma once


#include <QtWidgets/qwidget.h>
#include "ui_BaseWidget.h"

class BaseWidget : public QWidget
{
	Q_OBJECT

public:
	BaseWidget(QWidget *parent = Q_NULLPTR);
	~BaseWidget();

private:
	Ui::BaseWidget ui;
};
