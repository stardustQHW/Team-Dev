#pragma once
#include<fstream>

using namespace std;

class FileInitialization
{
public:
	void createFiles(void);
private:
	bool detectFile(void);

	void createInputFile(void);
	void createLogFile(void);
	void createOutputFile(void);
	void createRegisterFile(void);

	ifstream inputStream;
	ofstream outputStream;
};

