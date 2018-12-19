#include "ConsoleBlocks.h"

ConsoleBlocks::ConsoleBlocks(QWidget *parent)
	: QMainWindow(parent)
{


	ui.setupUi(this);
	canvas = findChild<Canvas*>("canvas");
	Canvas::startBlock = findChild<CBStartBlock*>("StartBlock");

	
	scriptExecuter = new chaiscript::ChaiScript();
	ScriptFunctions::AddFunctions(scriptExecuter);
	scriptExecuter->eval_file(translator.GetScript());
}

void ConsoleBlocks::on_pushButton_clicked()
{
	
	if(translator.TranslateAllBlocks())
		scriptExecuter->eval_file(translator.GetScript());
	else return;
}