#ifndef SEARCH_H_INCLUDED
#define SEARCH_H_INCLUDED

#include <string>
#include "add.h"
#include "functions.h"
#include "print.h"
using namespace std;

bool search(string str, string& substr);
void searchName(string& str, vector<employee>& db);
void searchEmail(string& str, vector<employee>& db);
void searchAge(int& start, int& end, vector<employee>& db);
void searchSalary(int& start, int& end, vector<employee>& db);
void searchEmployees(vector<employee>& db);

#endif // SEARCH_H_INCLUDED
