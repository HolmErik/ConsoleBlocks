#include "ConsoleBlocks.h"

ConsoleBlocks::ConsoleBlocks(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	console = findChild<ConsoleWidget*>("Console");

	
}


//FOR JOHAN FUTURE REFERENCE
void ConsoleBlocks::on_pushButton_clicked()
{
	std::string text;
	std::ifstream stream;
	stream.open("src/scripts/output.txt");
	if (stream.is_open()) {
		console->label->setText("");
		while (std::getline(stream, text)) {

			console->label->setText(console->label->text() + "\n" + QString::fromStdString(text));
		}
		stream.close();
	}
	setWindowTitle(tr("WE DID IT REDDIT"));
}