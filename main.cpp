#include<iostream>
#include<fstream>
#include"Generator.h"
#include"FileInitialization.h"
#pragma warning(disable : 4996)

using namespace std;

Student student[114514];

int main() {
	freopen("result.txt", "w", stdout);
	FileInitialization().createFiles();
	cerr << "请依次输入总人数与分成小组数量:" << endl;
	int totalStudentNumber;
	cin >> totalStudentNumber;
	int totalTeamNumber;
	cin >> totalTeamNumber;
	freopen("input.txt", "r", stdin);
	system("input.txt");
	for (int i = 1; i <= totalStudentNumber; i++) {
		string name;
		cin >> name;
		student[i].setName(name);
	}
	Generator(totalStudentNumber).generateWithSortedList_Captained(student, totalTeamNumber);
	fclose(stdout);
	system("result.txt");
	system("pause");
	exit(0);
	return 0;
}