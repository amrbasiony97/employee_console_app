#include "../include/functions.h"

int integerLength(int num) {
    int len{ 0 };
    while (num > 0) {
        len++;
        num /= 10;
    }
    return len;
}

int stringToNumber(string str) {
    int num{ 0 };
    for (int i = 0; i < (int)str.length(); i++) {
        num *= 10;
        num += (str[i] - '0');
    }
    return num;
}

string intToString(int x) {
    string str{ "" };
    vector<int> v;
    while (x > 0) {
        v.push_back(x % 10);
        x /= 10;
    }
    while (!v.empty()) {
        str += ((char)v.back() + '0');
        v.pop_back();
    }
    return str;
}

string employeeId(int& id) {
    stringstream ss;
    ss << "emp_" << setw(4) << setfill('0') << id;
    return ss.str();
}

bool emailValidation(string& email) {
    for (int i = 0; i < (int)email.length(); i++) {
        if (email[i] == '@') {
            for (int j = i + 1; j < (int)email.length(); j++) {
                if (email[j] == '.') {
                    return true;
                }
            }
        }
    }
    return false;
}

char toUpper(char& c) {
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}

string getEmployeeId() {
    int index;
    cout << "\nSelect an employee by entering his id number (e.g. 1 for emp_0001, 2 for employee emp_0002 and so on): \n\n> ";
    while (!(cin >> index)) {
        cin.clear();
        cin.ignore(200, '\n');
        cout << "Invalid input, try again: ";
    }
    return employeeId(index);
}
