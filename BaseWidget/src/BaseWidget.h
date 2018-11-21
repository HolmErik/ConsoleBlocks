#pragma once

#include <QtWidgets/QWidget>

class BaseWidget : public QWidget
{
	Q_OBJECT

public:
	BaseWidget(QWidget *parent = Q_NULLPTR);
};
