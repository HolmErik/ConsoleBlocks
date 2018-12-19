#include "EndBlock_Canvas.h"

EndBlock_Canvas::EndBlock_Canvas(QWidget *parent)
	: CBBaseBlock(parent)
{
	ui.setupUi(this);
}

EndBlock_Canvas::~EndBlock_Canvas()
{
}

std::string EndBlock_Canvas::getCodeLine()
{
	return "}";
}
