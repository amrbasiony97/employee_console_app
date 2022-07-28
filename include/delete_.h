#ifndef DELETE_H_INCLUDED
#define DELETE_H_INCLUDED

#include <vector>
#include "employee.h"
#include "update.h"
using namespace std;

void deleteById(vector<employee>& db);
void deleteByAge(vector<employee>& db);
void deleteBySalary(vector<employee>& db);
void deleteEmployee(vector<employee>& db);

#endif // DELETE_H_INCLUDED
