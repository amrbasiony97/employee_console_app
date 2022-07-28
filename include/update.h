#ifndef UPDATE_H_INCLUDED
#define UPDATE_H_INCLUDED

#include <vector>
#include "add.h"
#include "employee.h"
#include "print.h"
using namespace std;

void updateColWidth2(vector<employee>& db);
void updateColWidth3(vector<employee>& db);
void updateColWidth4(vector<employee>& db);
void updateColWidth5(vector<employee>& db);
void updateAllColWidth(vector<employee>& db, employee emp);
void updateEmployee(vector<employee>& database);

#endif // UPDATE_H_INCLUDED
