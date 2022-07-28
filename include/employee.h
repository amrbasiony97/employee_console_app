#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>
#include "functions.h"
using namespace std;

class employee {
private:
    string id, name, email, gender;
    int age, salary;
    static int counter, columnWidth1, columnWidth2, columnWidth3, columnWidth4, columnWidth5, columnWidth6;

public:
    employee();
    employee(string& _name, string& _email, int& _age, int& _salary, string& _gender);

    int getCounter();
    int getColWidth1();
    int getColWidth2();
    int getColWidth3();
    int getColWidth4();
    int getColWidth5();
    int getColWidth6();

    void setCounter(int count);
    void setColWidth1(int width);
    void setColWidth2(int width);
    void setColWidth3(int width);
    void setColWidth4(int width);
    void setColWidth5(int width);
    void setColWidth6(int width);

    string getId();
    string getName();
    string getEmail();
    string getGender();
    int getAge();
    int getSalary();

    void setId(string _id);
    void setName(string _name);
    void setEmail(string _email);
    void setAge(int _age);
    void setSalary(int _salary);
    void setGender(string _gender);
};

#endif // EMPLOYEE_H_INCLUDED
