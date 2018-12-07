#include "CBBaseBlock.h"
#include "Qt3DInput/qmouseevent.h"

CBBaseBlock::CBBaseBlock(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);



}

CBBaseBlock::~CBBaseBlock()
{
}


void CBBaseBlock::mousePressEvent(QMouseEvent *e)
{
	if (e->buttons() & Qt::LeftButton)
	{
	}
}

void CBBaseBlock::mouseReleaseEvent(QMouseEvent *e)
{
	if (QWidget::window()->childAt(e->windowPos().x(), e->windowPos().y())->underMouse())//if widget under mouse is under mouse??
	{
		this->ui.label->setText("asdasdasd");
		this->ui.label->setText(QString::number(e->windowPos().x()));
		CBBaseBlock *n = new CBBaseBlock(this);
		this->layout()->addWidget(n);
	}
}