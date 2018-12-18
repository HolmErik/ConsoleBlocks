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
	static void print(const std::string &outPut);
	static void print(const int &outPut);
	static void print(const float &outPut);
	static void printFile(const std::string &filePath);
	static void clearConsole();
private:
	static QLabel* label;
	static std::string consoleText;
	Ui::ConsoleWidget ui;
};
