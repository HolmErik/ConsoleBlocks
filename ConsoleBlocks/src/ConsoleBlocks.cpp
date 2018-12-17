#include "ConsoleBlocks.h"

ConsoleBlocks::ConsoleBlocks(QWidget *parent)
	: QMainWindow(parent)
{

	////JOHAN DEBUG
	//translator.OutPut(R"(puts("Hello World");)");


	//chaiscript::ChaiScript chai;
	////chai.add(chaiscript::fun(&post), "post");
	//chai.eval_file(translator.GetScript());

	////JOHAN DEBUG

	ui.setupUi(this);
	console = findChild<ConsoleWidget*>("CW");
	canvas = findChild<Canvas*>("canvas");
	canvas->setConsole(console);
	ConsoleWidget::print("HOOOOORA");

	
}

void ConsoleBlocks::on_pushButton_clicked()
{
	console->printFile("src/scripts/output.txt");
	setWindowTitle(tr("WE DID IT REDDIT"));
}