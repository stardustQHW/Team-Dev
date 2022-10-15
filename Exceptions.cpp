#include "Exceptions.h"

InvalidInputException::InvalidInputException():errorType(1) {}

InvalidInputException::InvalidInputException(int studentNumber, int teamNumber):studentNumber(studentNumber),teamNumber(teamNumber),errorType(2) {}

