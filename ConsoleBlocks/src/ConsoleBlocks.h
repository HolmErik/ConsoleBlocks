#pragma once

#include <QtWidgets/QMainWindow>
#include "../ui_ConsoleBlocks.h"

class ConsoleBlocks : public QMainWindow
{
	Q_OBJECT

public:
	ConsoleBlocks(QWidget *parent = Q_NULLPTR);


private slots:
	void on_pushButton_clicked();

private:
	Ui::ConsoleBlocksClass ui;
};
