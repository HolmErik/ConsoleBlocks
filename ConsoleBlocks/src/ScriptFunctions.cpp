#include "ScriptFunctions.h"

ScriptFunctions::ScriptFunctions()
{

}

ScriptFunctions::~ScriptFunctions()
{
}

void ScriptFunctions::AddFunctions(chaiscript::ChaiScript *Executer)
{
	Executer->add(chaiscript::fun(&CBPrint), "CBPrint");
}

void ScriptFunctions::CBPrint(const std::string &output)
{
	ConsoleWidget::print(output);
}

