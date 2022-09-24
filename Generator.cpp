#include "Generator.h"

#include<algorithm>

void Generator::generateWithSortedList_Captained(Student student[], int teamNumber)
{
	srand(time(NULL));
	int teamLength = totalStudentNumber / teamNumber;
	int remainLength = totalStudentNumber % teamNumber;
	for (int i = 1; i <= teamLength; i++) {
		random_shuffle(student + (i - 1) * teamNumber + 1, student + i * teamNumber);
		//random_shuffle(student + (i - 1) * teamNumber + 1, student + i * teamNumber);
	}
	random_shuffle(student + teamLength * teamNumber + 1, student + totalStudentNumber);
	for (int i = 1; i <= teamNumber; i++) {
		student[i].printData();
		for (int j = 1; j <= teamLength - 1; j++) {
			cout << "    ";
			cerr << "    ";
			student[j * teamNumber + i].printData();
		}
		if (remainLength != 0) {
			cout << "    ";
			cerr << "    ";
			student[teamNumber * teamLength + remainLength].printData();
			remainLength--;
		}
	}
}

Generator::Generator(const int totalNumber)
{
	this->totalStudentNumber = totalNumber;
}
