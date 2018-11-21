#include "BaseWidget.h"

BaseWidget::BaseWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

BaseWidget::~BaseWidget()
{
}
