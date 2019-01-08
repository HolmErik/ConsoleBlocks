#pragma once


#include <QtWidgets/QMainWindow>
#include <chaiscript/chaiscript.hpp>
#include "../ui_ConsoleBlocks.h"
#include "Translator.h"
#include "ScriptFunctions.h"
#include "CBStartBlock.h"

class ConsoleBlocks : public QMainWindow
{
	Q_OBJECT

public:
	ConsoleBlocks(QWidget *parent = Q_NULLPTR);
	ConsoleWidget* console;
	Canvas* canvas;
private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();

private:
	Ui::ConsoleBlocksClass ui;
	Translator translator;
	//chaiscript::ChaiScript* scriptExecuter;

};
