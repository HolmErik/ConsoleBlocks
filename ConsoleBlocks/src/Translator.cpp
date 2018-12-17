#include "Translator.h"



Translator::Translator()
{
	fileName = "TranslatedCode.chai";
	file.open(fileName);
}


Translator::~Translator()
{
}

void Translator::OutPut(const std::string code)
{
	if (!file.is_open())
	{
		file.open(fileName);
	}
	file << code.c_str() << "\n";
	
	
}
void Translator::CloseFile()
{
	if (file.is_open())
	{
		file.close();
	}
}
std::string Translator::GetScript()
{
	CloseFile();
	return fileName;
}
