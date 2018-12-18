#include "ConsoleBlocks.h"

ConsoleBlocks::ConsoleBlocks(QWidget *parent)
	: QMainWindow(parent)
{


	translator.OutPut(R"(CBPrint("Hello World");)");


	ui.setupUi(this);
	canvas = findChild<Canvas*>("canvas");
	canvas->startBlock = findChild<CBStartBlock*>("StartBlock");
	
	scriptExecuter = new chaiscript::ChaiScript();
	ScriptFunctions::AddFunctions(scriptExecuter);
	scriptExecuter->eval_file(translator.GetScript());
}

void ConsoleBlocks::on_pushButton_clicked()
{
	console->printFile("src/scripts/output.txt");
}