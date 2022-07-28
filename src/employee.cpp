#include "../include/employee.h"

employee::employee() {
    name = "";
    email = "";
    gender = "";
    age = 0;
    salary = 0;
}

employee::employee(string& _name, string& _email, int& _age, int& _salary, string& _gender) {
    name = _name;
    email = _email;
    age = _age;
    salary = _salary;
    gender = _gender;

    columnWidth2 = max(columnWidth2, (int)name.length());
    columnWidth3 = max(columnWidth3, (int)email.length());
    columnWidth4 = max(columnWidth4, integerLength(age));
    columnWidth5 = max(columnWidth5, integerLength(salary));
    columnWidth6 = max(columnWidth6, (int)gender.length());

    counter++;
    if (counter < 1e4)
        columnWidth1 = 8;
    else if (counter < 1e5)
        columnWidth1 = 9;
    else if (counter < 1e6)
        columnWidth1 = 10;
    id = employeeId(counter);
}

int employee::getCounter() { return counter; }
int employee::getColWidth1() { return columnWidth1; }
int employee::getColWidth2() { return columnWidth2; }
int employee::getColWidth3() { return columnWidth3; }
int employee::getColWidth4() { return columnWidth4; }
int employee::getColWidth5() { return columnWidth5; }
int employee::getColWidth6() { return columnWidth6; }

void employee::setCounter(int count) { counter = count; }
void employee::setColWidth1(int width) { columnWidth1 = width; }
void employee::setColWidth2(int width) { columnWidth2 = width; }
void employee::setColWidth3(int width) { columnWidth3 = width; }
void employee::setColWidth4(int width) { columnWidth4 = width; }
void employee::setColWidth5(int width) { columnWidth5 = width; }
void employee::setColWidth6(int width) { columnWidth6 = width; }

string employee::getId() { return id; }
string employee::getName() { return name; }
string employee::getEmail() { return email; }
string employee::getGender() { return gender; }
int employee::getAge() { return age; }
int employee::getSalary() { return salary; }

void employee::setId(string _id) {
    id = _id;
}

void employee::setName(string _name) {
    name = _name;
    columnWidth2 = max(columnWidth2, (int)name.length());
}

void employee::setEmail(string _email) {
    email = _email;
    columnWidth3 = max(columnWidth3, (int)email.length());
}

void employee::setAge(int _age) {
    age = _age;
    columnWidth4 = max(columnWidth4, integerLength(age));
}

void employee::setSalary(int _salary) {
    salary = _salary;
    columnWidth5 = max(columnWidth5, integerLength(salary));
}

void employee::setGender(string _gender) {
    gender = _gender;
    columnWidth6 = max(columnWidth6, (int)gender.length());
}

// Initialize employees counter with zero
int employee::counter = 0;

// Initialize each column width with minimum head column width
int employee::columnWidth1 = 8; // Length of each id, e.g. "emp_0001"
int employee::columnWidth2 = 4; // Length of "Name"
int employee::columnWidth3 = 5; // Length of "Email"
int employee::columnWidth4 = 3; // Length of "Age"
int employee::columnWidth5 = 6; // Length of "Salary"
int employee::columnWidth6 = 6; // Length of "Gender"
