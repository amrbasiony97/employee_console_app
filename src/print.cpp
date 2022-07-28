#include "../include/print.h"

void printHelp() {
    cout << "\nEnter a choice:\n";
    cout << "1) Add new employee\n";
    cout << "2) Print all employees\n";
    cout << "3) Search for employees in database\n";
    cout << "4) Update data of an employee\n";
    cout << "5) Delete employee(s)\n";
    cout << "6) Print help list\n";
    cout << "7) Exit\n";
}

void printIterator(int len, char placeholder, string str) {
    cout << str;
    for (int i = 0; i < (len - (int)str.length()); i++) {
        cout << placeholder;
    }
}

void printLine(employee& emp) {
    stringstream ss;
    int len = emp.getColWidth1() + emp.getColWidth2() + emp.getColWidth3() + emp.getColWidth4() + emp.getColWidth5() + emp.getColWidth6() + (5 * 3) + 2;

    for (int i = 0; i < len; i++) {
        ss << "_";
    }
    cout << ' ' << ss.str() << '\n';
}

void printUpperVerticalLines(employee& emp) {
    cout << "| "; printIterator(emp.getColWidth1(), ' ', "");
    cout << " | "; printIterator(emp.getColWidth2(), ' ', "");
    cout << " | "; printIterator(emp.getColWidth3(), ' ', "");
    cout << " | "; printIterator(emp.getColWidth4(), ' ', "");
    cout << " | "; printIterator(emp.getColWidth5(), ' ', "");
    cout << " | "; printIterator(emp.getColWidth6(), ' ', "");
    cout << " |\n";
}

void printLowerVerticalLines(employee& emp) {
    cout << "|_"; printIterator(emp.getColWidth1(), '_', "");
    cout << "_|_"; printIterator(emp.getColWidth2(), '_', "");
    cout << "_|_"; printIterator(emp.getColWidth3(), '_', "");
    cout << "_|_"; printIterator(emp.getColWidth4(), '_', "");
    cout << "_|_"; printIterator(emp.getColWidth5(), '_', "");
    cout << "_|_"; printIterator(emp.getColWidth6(), '_', "");
    cout << "_|\n";
}

void printHead(employee& emp) {
    cout << "| "; printIterator(emp.getColWidth1(), ' ', "Id");
    cout << " | "; printIterator(emp.getColWidth2(), ' ', "Name");
    cout << " | "; printIterator(emp.getColWidth3(), ' ', "Email");
    cout << " | "; printIterator(emp.getColWidth4(), ' ', "Age");
    cout << " | "; printIterator(emp.getColWidth5(), ' ', "Salary");
    cout << " | "; printIterator(emp.getColWidth6(), ' ', "Gender");
    cout << " |\n";
}

void printRow(employee& emp) {
    cout << "| "; printIterator(emp.getColWidth1(), ' ', emp.getId());
    cout << " | "; printIterator(emp.getColWidth2(), ' ', emp.getName());
    cout << " | "; printIterator(emp.getColWidth3(), ' ', emp.getEmail());
    cout << " | "; printIterator(emp.getColWidth4(), ' ', intToString(emp.getAge()));
    cout << " | "; printIterator(emp.getColWidth5(), ' ', intToString(emp.getSalary()));
    cout << " | "; printIterator(emp.getColWidth6(), ' ', emp.getGender());
    cout << " |\n";
}

void printBefore(vector<employee> db) {
    employee emp;
    printLine(emp);
    printUpperVerticalLines(emp);
    printHead(emp);
    printLowerVerticalLines(emp);
    printUpperVerticalLines(emp);
}

void _printEmployees_(vector<employee>& db, int start, int end) {
    employee emp;
    for (int i = start; i < end; i++) {
        emp = db[i];
        printRow(emp);
    }
}

void printAfter(vector<employee> db) {
    employee emp;
    printLowerVerticalLines(emp);
}

void printEmployees(vector<employee>& db) {
    printBefore(db);
    _printEmployees_(db, 0, db.size());
    printAfter(db);
}
