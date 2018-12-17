#include "ConsoleWidget.h"

std::string ConsoleWidget::consoleText;
QLabel* ConsoleWidget::label;


ConsoleWidget::ConsoleWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	label = findChild<QLabel*>("CL");

	print("Console:");
}

ConsoleWidget::~ConsoleWidget()
{

}


void ConsoleWidget::print(const std::string outPut)
{
	consoleText += outPut + "\n";
	label->setText(QString::fromStdString(consoleText));
}
void ConsoleWidget::print(const int outPut)
{
	consoleText += std::to_string(outPut) + "\n";
	label->setText(QString::fromStdString(consoleText));
}
void ConsoleWidget::print(const float outPut)
{
	consoleText += std::to_string(outPut) + "\n";
	label->setText(QString::fromStdString(consoleText));
}

void ConsoleWidget::printFile(const std::string filePath)
{
	std::string textRow;
	std::ifstream file;
	file.open(filePath);
	if (file.is_open())
	{
		while (std::getline(file, textRow))
		{
			print(textRow);
		}
		file.close();
	}
}
void ConsoleWidget::clearConsole()
{
	consoleText = "";
	label->setText(QString::fromStdString(consoleText));
}



