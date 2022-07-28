#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED

#include <iostream>
#include <vector>
#include <sstream>
#include "employee.h"
using namespace std;

void printHelp();
void printIterator(int len, char placeholder, string str);
void printLine(employee& emp);
void printUpperVerticalLines(employee& emp);
void printLowerVerticalLines(employee& emp);
void printHead(employee& emp);
void printRow(employee& emp);
void printBefore(vector<employee> db);
void _printEmployees_(vector<employee>& db, int start, int end);
void printAfter(vector<employee> db);
void printEmployees(vector<employee>& db);

#endif // PRINT_H_INCLUDED
