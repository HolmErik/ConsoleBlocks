#pragma once


#include <QtWidgets/QMainWindow>
#include <chaiscript/chaiscript.hpp>
#include "../ui_ConsoleBlocks.h"
#include "Translator.h"

class ConsoleBlocks : public QMainWindow
{
	Q_OBJECT

public:
	ConsoleBlocks(QWidget *parent = Q_NULLPTR);
	ConsoleWidget* console;
	Canvas* canvas;
private slots:
	void on_pushButton_clicked();
	

private:
	Ui::ConsoleBlocksClass ui;
	Translator translator;

};
