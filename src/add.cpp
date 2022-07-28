#include "../include/add.h"

void enterName(string& name) {
    cout << "Enter employee name: ";
    cin.ignore(200, '\n');
    getline(cin, name);
}

void enterEmail(string& email, bool validation) {
    cout << "Enter email: ";
    if (validation) {
        do {
            cin >> email;
            if (!emailValidation(email)) {
                cout << "Invalid email input try again, valid email looks like this: 123@example.com\n";
            }
        } while (!emailValidation(email));
    }
    else {
        cin >> email;
    }
}

void enterNumber(int& num, string str) {
    cout << "Enter " << str << ": ";
    while (!(cin >> num)) {
        cin.clear();
        cin.ignore(200, '\n');
        cout << "Invalid input, try again: ";
    }
}

void enterNumberQuery(int& start, int& end, string str) {
    cout << "Enter the range of " << str << " to search for\n";
    cout << "Start: ";
    while (!(cin >> start)) {
        cin.clear();
        cin.ignore(200, '\n');
        cout << "Invalid input, try again: ";
    }
    cout << "End: ";
    while (!(cin >> end)) {
        cin.clear();
        cin.ignore(200, '\n');
        cout << "Invalid input, try again: ";
    }
}

void enterGender(string& gender) {
    char genderChar;
    cout << "Enter gender ('m' for male or 'f' for female): ";
RETRY_GENDER:
    cin >> genderChar;
    switch (genderChar) {
    case 'm':
    case 'M':
        gender = "Male";
        break;
    case 'f':
    case 'F':
        gender = "Female";
        break;
    default:
        cout << "Invalid input, try again: ";
        goto RETRY_GENDER;
    }
}

employee addEmployee() {
    string _name, _email, _gender;
    int _age;
    int _salary;
    enterName(_name);
    enterEmail(_email, true);
    enterNumber(_age, "age");
    enterNumber(_salary, "salary");
    enterGender(_gender);
    employee tmp(_name, _email, _age, _salary, _gender);
    return tmp;
}
