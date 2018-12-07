#include "Canvas.h"

Canvas::Canvas(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	console = QWidget::window()->findChild<ConsoleWidget*>("console");
//	console->clearConsole();
//	console->print("Hora");
}

Canvas::~Canvas()
{
}

std::vector<CBBaseBlock*> Canvas::GetBlocks()
{
	return std::vector<CBBaseBlock*>();
}

void Canvas::blocks()
{
	
}
