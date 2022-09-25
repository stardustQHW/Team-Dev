#include<iostream>
#include<fstream>
#include<Windows.h>
#include<conio.h>
#include"Generator.h"
#include"FileInitialization.h"
#include"constants.h"
#pragma warning(disable : 4996)

using namespace std;

Student student[114514];

class Constants {
public:
	string MainMenu = "Main Menu:\n1.根据已经按排序的列表生成\n2.关于\n3.退出\n";
	string About = "About:\n由stardustQHW开发\n版本:v1.1\nGithub:https://github.com/stardustQHW/Team-Dev\n";
private:
	string version = "v1.1";
};

class Worker {
public:
	static void carryOut(int);
};


int main() {

	while (true) {
		cerr << Constants().MainMenu << endl;
		char handle;
		handle = getch();
		int operation = handle - '0';
		Worker::carryOut(operation);
	}
	return 0;
}

void Worker::carryOut(int operation)
{
	switch (operation) {
	case 1:
		system("cls");
		freopen("result.txt", "w", stdout);
		FileInitialization().createFiles();
		cerr << "请依次输入总人数与分成小组数量:" << endl;
		int totalStudentNumber;
		cin >> totalStudentNumber;
		int totalTeamNumber;
		cin >> totalTeamNumber;
		system("cls");
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
		break;
	case 2:
		system("cls");
		cerr << Constants().About << endl;
		Sleep(3000);
		cerr << endl;
		system("cls");
		break;
	case 3:
		exit(0);
		break;
	default:
		system("cls");
		cerr << "STILL DEVELOPING!" << endl;
		Sleep(2000);
		system("cls");
		break;
	}
}
