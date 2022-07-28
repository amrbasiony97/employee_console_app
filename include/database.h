#ifndef DATABASE_H_INCLUDED
#define DATABASE_H_INCLUDED

#include <vector>
#include <fstream>
#include "employee.h"
#include "functions.h"
using namespace std;

string readAttribute(string& line, string& value);
void loadDatabase(vector<employee>& db);
void saveDatabase(vector<employee>& db);

#endif // DATABASE_H_INCLUDED
