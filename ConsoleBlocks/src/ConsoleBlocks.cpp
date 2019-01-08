#include "ConsoleBlocks.h"

ConsoleBlocks::ConsoleBlocks(QWidget *parent)
	: QMainWindow(parent)
{


	ui.setupUi(this);
	canvas = findChild<Canvas*>("canvas");
	Canvas::startBlock = findChild<CBStartBlock*>("StartBlock");
}

void ConsoleBlocks::on_pushButton_clicked()
{
	chaiscript::ChaiScript *tmpChai = new chaiscript::ChaiScript();
	ScriptFunctions::AddFunctions(tmpChai);
	if (translator.TranslateAllBlocks()) {
		tmpChai->eval_file(translator.GetScript());
	}
	delete(tmpChai);
}
void ConsoleBlocks::on_pushButton_2_clicked()
{
	ConsoleWidget::clearConsole();
}