#include "ConsoleWidget.h"

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

void ConsoleWidget::print(std::string outPut)
{
	consoleText += outPut + "\n";
	label->setText(QString::fromStdString(consoleText));
}

void ConsoleWidget::printFile(const std::string filePath)
{

	std::fstream file;
	file.open("src/scripts/output.txt");
	if (file.is_open())
	{
		label->setText("");
		while (std::getline(file, consoleText))
		{

			label->setText(label->text() + "\n" + QString::fromStdString(consoleText));
		}
		file.close();
	}
}
void ConsoleWidget::clearConsole()
{
	consoleText = "";
	label->setText(QString::fromStdString(consoleText));
}



