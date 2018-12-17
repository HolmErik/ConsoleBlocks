#pragma once

#include <fstream>

class Translator
{
public:
	Translator();
	~Translator();

	void OutPut(const std::string code);
	void CloseFile();
	std::string GetScript();
private:
	std::ofstream file;
	std::string fileName;
};

