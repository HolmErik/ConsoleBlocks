#include "ConsoleBlocks.h"
#include <QtWidgets/QApplication>
//#include <chaiscript/chaiscript.hpp>
//#include <fstream>

//void post(const std::string &output)
//{
//	std::ofstream file;
//	file.open("src/scripts/output.txt");
//	file << output << std::endl;
//	file.close();
//}

int main(int argc, char *argv[])
{


	//chaiscript::ChaiScript chai;
	//chai.add(chaiscript::fun(&post), "post");
	//chai.eval_file("src/scripts/script.chai");
	QApplication* a = new QApplication(argc, argv);
	ConsoleBlocks* w = new ConsoleBlocks();
	w->show();
	a->exec();
	
	delete(w);
	delete(a);
	return 0;
}
