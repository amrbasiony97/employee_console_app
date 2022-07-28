#ifndef EMPLOYEE_SYSTEM_H_INCLUDED
#define EMPLOYEE_SYSTEM_H_INCLUDED

#include <iostream>
#include "add.h"
#include "database.h"
#include "delete_.h"
#include "functions.h"
#include "print.h"
#include "search.h"
#include "update.h"

class employeeSystem {
private:
    vector<employee> database;
    employee emp;

public:
    void run();
};

#endif // EMPLOYEE_SYSTEM_H_INCLUDED
