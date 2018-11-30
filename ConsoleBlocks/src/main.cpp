#include "ConsoleBlocks.h"
#include <QtWidgets/QApplication>




int main(int argc, char *argv[])
{
	QApplication* a = new QApplication(argc, argv);
	ConsoleBlocks* w = new ConsoleBlocks();
	w->show();
	a->exec();
	
	delete(w);
	delete(a);
	return 0;
}
