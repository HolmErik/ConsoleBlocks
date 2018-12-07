#include "ConsoleBlocks.h"

ConsoleBlocks::ConsoleBlocks(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	console = findChild<ConsoleWidget*>("CW");

	
}


//FOR JOHAN FUTURE REFERENCE
void ConsoleBlocks::on_pushButton_clicked()
{
	console->print("Hej");
	setWindowTitle(tr("WE DID IT REDDIT"));
}