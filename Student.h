#pragma once
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Student
{
public:
	Student();
	Student(string name);
	Student(string name, int totScore);
	Student(string name, short int id, int totScore);
	Student(string name, short int id, int totScore, int rank);
	Student(const Student&);

	Student operator=(const Student&);
	
	int getId(void);
	string getName(void);
	int getTotScore(void);
	int getRank(void);

	void setId(short);
	void setName(string);
	void setTotScore(int);
	void setRank(int);

	void printData(void);
private:
	short int id;
	string name;
	int totScore;
	int rank;
};

