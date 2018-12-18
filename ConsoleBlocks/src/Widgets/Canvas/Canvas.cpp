#include "Canvas.h"

QWidget* Canvas::me = nullptr;


Canvas::Canvas(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	me = this;
	
}

Canvas::~Canvas()
{
}
