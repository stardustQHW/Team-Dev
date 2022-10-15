#pragma once
#include"Student.h"
#include"Exceptions.h"

class Generator
{
public:
	void generateWithName();
	void generateWithSortedList_Captained(Student[], int);
	Generator(const int);
private:
	int totalStudentNumber;
};

