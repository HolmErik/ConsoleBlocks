#include "ConsoleBlocks.h"

ConsoleBlocks::ConsoleBlocks(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QFrame *qf = this->findChild<QFrame*>("blockframe");
	qf->setStyleSheet("background-color: white");

	
}

void ConsoleBlocks::on_pushButton_clicked()
{
	setWindowTitle(tr("WE DID IT REDDIT"));
}