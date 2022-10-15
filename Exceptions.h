#pragma once
#include<iostream>
using namespace std;
class InvalidInputException {
public:
	InvalidInputException();
	InvalidInputException(int studentNumber, int teamNumber);
	void what()const {
		if (errorType == 1) {
			cerr << "[ERROR]:Invalid Input!" << endl;
		}
		else if(errorType == 2) {
			cerr << "[ERROR]:Invalid Input!" << endl << "The number of students is " << studentNumber << " , the number of teams is " << teamNumber << "." << endl;
		}
		else {
			cerr << "[ERROR]:Unknown Error" << endl;
		}
	}
private:
	int studentNumber, teamNumber;
	int errorType;
};