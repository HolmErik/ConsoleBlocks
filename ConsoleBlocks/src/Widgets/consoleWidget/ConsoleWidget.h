#pragma once

#include <QtWidgets/qwidget.h>
#include <QtWidgets/qframe.h>
#include <fstream>
#include "ui_ConsoleWidget.h"

class ConsoleWidget : public QWidget
{
	Q_OBJECT

public:
	ConsoleWidget(QWidget *parent = Q_NULLPTR);
	~ConsoleWidget();
	void print(std::string outPut);
	void printFile(const std::string filePath);
	void clearConsole();
private:
	QLabel* label;
	std::string consoleText;
	Ui::ConsoleWidget ui;
};
