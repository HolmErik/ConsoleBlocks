#pragma once

#include <fstream>
#include "Canvas/Canvas.h"

class Translator
{
public:
	Translator();
	~Translator();

	void OutPut(const std::string code);
	bool TranslateAllBlocks();
	void CloseFile();
	std::string GetScript();
private:
	std::ofstream file;
	std::string fileName;
};

