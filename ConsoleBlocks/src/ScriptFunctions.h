#pragma once

#include <string>
#include <ConsoleWidget.h>
#include <chaiscript/chaiscript.hpp>
class ScriptFunctions
{
public:
	ScriptFunctions();
	~ScriptFunctions();
	static void AddFunctions(chaiscript::ChaiScript *Executer);
	
private:
	static void CBPrint(const std::string &outPut);
};