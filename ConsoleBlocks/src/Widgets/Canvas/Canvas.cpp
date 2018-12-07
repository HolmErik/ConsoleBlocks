#include "Canvas.h"

Canvas::Canvas(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}
void Canvas::setConsole(ConsoleWidget* c)
{
	console = c;
	console->print("Hittat console");
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
