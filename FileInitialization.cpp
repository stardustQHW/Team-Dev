#include "FileInitialization.h"

void FileInitialization::createFiles(void)
{
	if (detectFile()==false) {
		createInputFile();
		createLogFile();
		createOutputFile();
		createRegisterFile();
	}
}

bool FileInitialization::detectFile(void)
{
	string condition = "";
	inputStream = ifstream("register.config");
	inputStream >> condition;
	if (condition == "Created") {
		return true;
	}
	return false;
}

void FileInitialization::createInputFile(void)
{
	outputStream = ofstream("input.txt");
	outputStream << "";
}

void FileInitialization::createLogFile(void)
{
	outputStream = ofstream("log.txt");
	outputStream << "";
}

void FileInitialization::createOutputFile(void)
{
	outputStream = ofstream("result.txt");
	outputStream << "";
}

void FileInitialization::createRegisterFile(void)
{
	outputStream = ofstream("register.config");
	outputStream << "Created" << endl;
}
