#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
#include "employee.h"
using namespace std;

int integerLength(int num);
int stringToNumber(string str);
string intToString(int x);
string employeeId(int& id);
bool emailValidation(string& email);
char toUpper(char& c);
string getEmployeeId();

#endif // FUNCTIONS_H_INCLUDED
