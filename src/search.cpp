#include "../include/search.h"

bool search(string str, string& substr) {

    if (substr.length() > str.length())
        return false;

    int cnt = 0;
    for (int i = 0; i < (int)str.length(); i++) {
        if (toUpper(str[i]) == toUpper(substr[0])) {
            for (int j = i; j < (i + (int)substr.length()); j++) {
                if (toUpper(str[j]) == toUpper(substr[cnt])) { cnt++; }
                else {
                    cnt = 0;
                    break;
                }
                if (cnt == (int)substr.length())
                    return true;
            }
        }
    }
    return false;
}

void searchName(string& str, vector<employee>& db) {
    printBefore(db);
    for (int i = 0; i < (int)db.size(); i++) {
        if (search((db[i].getName()), str))
            _printEmployees_(db, i, i + 1);

    }
    printAfter(db);
}

void searchEmail(string& str, vector<employee>& db) {
    printBefore(db);
    for (int i = 0; i < (int)db.size(); i++) {
        if (search((db[i].getEmail()), str))
            _printEmployees_(db, i, i + 1);

    }
    printAfter(db);
}

void searchAge(int& start, int& end, vector<employee>& db) {
    printBefore(db);
    for (int i = 0; i < (int)db.size(); i++) {
        if (db[i].getAge() >= start && db[i].getAge() <= end)
            _printEmployees_(db, i, i + 1);
    }
    printAfter(db);
}

void searchSalary(int& start, int& end, vector<employee>& db) {
    printBefore(db);
    for (int i = 0; i < (int)db.size(); i++) {
        if (db[i].getSalary() >= start && db[i].getSalary() <= end)
            _printEmployees_(db, i, i + 1);
    }
    printAfter(db);
}

void searchEmployees(vector<employee>& db) {
    cout << "\nSearch for employees using:\n";
    cout << "1) Name\n";
    cout << "2) Email\n";
    cout << "3) Age range\n";
    cout << "4) Salary range\n";
    cout << "\nSearch > ";
    int choice;
    while (!(cin >> choice) || choice < 1 || choice>4) {
        cin.clear();
        cin.ignore(200, '\n');
        cout << "Invalid input, try again!\n";
    }
    string str;
    int start, end;
    switch (choice) {
    case 1:
        enterName(str);
        searchName(str, db);
        break;
    case 2:
        enterEmail(str, false);
        searchEmail(str, db);
        break;
    case 3:
        enterNumberQuery(start, end, "age");
        searchAge(start, end, db);
        break;
    case 4:
        enterNumberQuery(start, end, "salary");
        searchSalary(start, end, db);
        break;
    default:
        cout << "Invalid input, try again\n";
    }
}
