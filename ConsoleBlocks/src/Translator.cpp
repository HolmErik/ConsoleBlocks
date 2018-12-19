#include "Translator.h"



Translator::Translator()
{
	fileName = "src/TranslatedCode.chai";
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

bool Translator::TranslateAllBlocks()
{
	CBBaseBlock *tmp = Canvas::startBlock->GetNextBlock();
	if (tmp == nullptr)
		return false;

	while (tmp != nullptr)
	{
		this->OutPut(tmp->getCodeLine());
		tmp = tmp->GetNextBlock();
	}

	return true;


}
