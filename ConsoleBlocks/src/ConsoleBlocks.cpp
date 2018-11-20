#include "ConsoleBlocks.h"

ConsoleBlocks::ConsoleBlocks(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	
}

void ConsoleBlocks::on_pushButton_clicked()
{
	setWindowTitle(tr("WE DID IT REDDIT"));
}