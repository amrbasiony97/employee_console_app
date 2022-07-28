#include "../include/update.h"

void updateColWidth2(vector<employee>& db) {
    if (db.empty()) {
        employee e;
        e.setColWidth2(4); // No. of chars of "name" equals 4
        return;
    }
    int width = 4;
    for (int i = 0; i < (int)db.size(); i++) {
        width = max(width, (int)db[i].getName().length());
    }
    db[0].setColWidth2(width);
}

void updateColWidth3(vector<employee>& db) {
    if (db.empty()) {
        employee e;
        e.setColWidth3(5); // No. of chars of "email" equals 5
        return;
    }
    int width = 5;
    for (int i = 0; i < (int)db.size(); i++) {
        width = max(width, (int)db[i].getEmail().length());
    }
    db[0].setColWidth3(width);
}

void updateColWidth4(vector<employee>& db) {
    if (db.empty()) {
        employee e;
        e.setColWidth4(3); // No. of chars of "age" equals 3
        return;
    }
    int width = 3;
    for (int i = 0; i < (int)db.size(); i++) {
        width = max(width, integerLength(db[i].getAge()));
    }
    db[0].setColWidth4(width);
}

void updateColWidth5(vector<employee>& db) {
    if (db.empty()) {
        employee e;
        e.setColWidth5(6); // No. of chars of "salary" equals 6
        return;
    }
    int width = 6;
    for (int i = 0; i < (int)db.size(); i++) {
        width = max(width, integerLength(db[i].getSalary()));
    }
    db[0].setColWidth5(width);
}

void updateAllColWidth(vector<employee>& db, employee emp) {
    int lastLength;
    lastLength = emp.getName().length();
    if (lastLength == emp.getColWidth2())
        updateColWidth2(db);
    lastLength = emp.getEmail().length();
    if (lastLength == emp.getColWidth3())
        updateColWidth3(db);
    lastLength = integerLength(emp.getAge());
    if (lastLength == emp.getColWidth4())
        updateColWidth4(db);
    lastLength = integerLength(emp.getSalary());
    if (lastLength == emp.getColWidth5())
        updateColWidth5(db);
}

void updateEmployee(vector<employee>& database) {
    bool updated{ false };
    string id = getEmployeeId();

    for (int i = 0; i<int(database.size()); i++) {
        if (database[i].getId() == id) {
            cout << "Employee with id: " << id << " found successfully\n";
            printBefore(database);
            _printEmployees_(database, i, i + 1);
            printAfter(database);
            cout << "\nChoose what to update from following: \n";
            cout << "1) Name\n2) Email\n3) Age\n4) Salary\n5) Gender\n\nUpdate > ";
            int choice;
            while (!(cin >> choice) || choice < 1 || choice>5) {
                cin.clear();
                cin.ignore(200, '\n');
                cout << "Invalid input, try again: ";
            }
            int num, lastLength;
            string str;
            switch (choice) {
            case 1:
                enterName(str);
                lastLength = database[i].getName().length();
                database[i].setName(str);
                if (lastLength == database[i].getColWidth2())
                    updateColWidth2(database);
                updated = true;
                break;
            case 2:
                enterEmail(str, true);
                lastLength = database[i].getEmail().length();
                database[i].setEmail(str);
                if (lastLength == database[i].getColWidth3())
                    updateColWidth3(database);
                updated = true;
                break;
            case 3:
                enterNumber(num, "age");
                lastLength = integerLength(database[i].getAge());
                database[i].setAge(num);
                if (lastLength == database[i].getColWidth4())
                    updateColWidth4(database);
                updated = true;
                break;
            case 4:
                enterNumber(num, "salary");
                lastLength = integerLength(database[i].getSalary());
                database[i].setSalary(num);
                if (lastLength == database[i].getColWidth5())
                    updateColWidth5(database);
                updated = true;
                break;
            case 5:
                enterGender(str);
                database[i].setGender(str);
                updated = true;
            }
        }
    }
    if (updated) { cout << "Data updated successfully!\n"; }
    else { cout << "There is no employee with such id!\n"; }
}
