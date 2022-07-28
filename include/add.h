#ifndef ADD_H_INCLUDED
#define ADD_H_INCLUDED

#include <iostream>
#include "functions.h"
#include "employee.h"

void enterName(string& name);
void enterEmail(string& email, bool validation);
void enterNumber(int& num, string str);
void enterNumberQuery(int& start, int& end, string str);
void enterGender(string& gender);
employee addEmployee();

#endif // ADD_H_INCLUDED
