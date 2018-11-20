#include "ConsoleBlocks.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ConsoleBlocks w;
	w.show();
	return a.exec();
}
