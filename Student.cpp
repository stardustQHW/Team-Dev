#include "Student.h"

#include"constants.h"


Student::Student():name("Null"),id(-1),totScore(0),rank(-1){}

Student::Student(string name):name(name),id(-1),totScore(0),rank(-1){}

Student::Student(string name, int totScore):name(name),totScore(totScore),id(-1),rank(-1){}

Student::Student(string name, short int id, int totScore):name(name),id(id),totScore(totScore),rank(-1){}

Student::Student(string name, short int id, int totScore, int rank):name(name),id(id),totScore(totScore),rank(rank){}

Student::Student(const Student& student):name(student.name),id(student.id),totScore(student.id),rank(student.rank){}

Student Student::operator=(const Student& student)
{
	name = student.name;
	id = student.id;
	rank = student.rank;
	totScore = student.totScore;
	return *this;
}

int Student::getId(void)
{
	return id;
}

string Student::getName(void)
{
	return name;
}

int Student::getTotScore(void)
{
	return totScore;
}

int Student::getRank(void)
{
	return rank;
}

void Student::setId(short id) {
	this->id = id;
}

void Student::setName(string name) {
	this->name = name;
}

void Student::setTotScore(int totScore) {
	this->totScore = totScore;
}

void Student::setRank(int rank) {
	this->rank = rank;
}

void Student::printData(void)
{
	cerr << "Name:" << name << " Id:" << id << " TotScore:" << totScore << " Rank:" << rank << endl;
	cout << name << endl;
}
