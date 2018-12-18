#include "ConsoleBlocks.h"

ConsoleBlocks::ConsoleBlocks(QWidget *parent)
	: QMainWindow(parent)
{

	////JOHAN DEBUG
	translator.OutPut(R"(CBPrint("Hello World");)");



	////JOHAN DEBUG

	ui.setupUi(this);
	console = findChild<ConsoleWidget*>("CW");
	canvas = findChild<Canvas*>("canvas");
	canvas->setConsole(console);
	
	scriptExecuter = new chaiscript::ChaiScript();
	ScriptFunctions::AddFunctions(scriptExecuter);
	scriptExecuter->eval_file(translator.GetScript());
}

void ConsoleBlocks::on_pushButton_clicked()
{
	console->printFile("src/scripts/output.txt");
}