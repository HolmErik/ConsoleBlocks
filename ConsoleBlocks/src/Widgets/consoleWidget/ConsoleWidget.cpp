#include "ConsoleWidget.h"

ConsoleWidget::ConsoleWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	label = findChild<QLabel*>("console");
	label->setText("to fix: \n    scroll and stuff");
}

ConsoleWidget::~ConsoleWidget()
{
}


