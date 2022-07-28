#include "../include/database.h"

string readAttribute(string& line, string& value) {
    string str = "";
    for (int i = 0; i < (int)line.length(); i++) {
        if (line[i] == ':') {
            for (int j = i + 2; j < (int)line.length(); j++)
                value += line[j];
            break;
        }
        str += line[i];
    }
    return str;
}

void loadDatabase(vector<employee>& db) {
    fstream DATABASE;
    employee emp;
    DATABASE.open("database.txt", ios::in); // Read data
    if (DATABASE.is_open()) {
        string line, attribute, value;
        int num;
        while (getline(DATABASE, line)) {
            value = "";
            attribute = readAttribute(line, value);
            if (attribute == "\tId")
                emp.setId(value);
            else if (attribute == "\tName")
                emp.setName(value);
            else if (attribute == "\tEmail")
                emp.setEmail(value);
            else if (attribute == "\tAge") {
                num = stringToNumber(value);
                emp.setAge(num);
            }
            else if (attribute == "\tSalary") {
                num = stringToNumber(value);
                emp.setSalary(num);
            }
            else if (attribute == "\tGender")
                emp.setGender(value);
            else if (attribute == "counter") {
                num = stringToNumber(value);
                emp.setCounter(num);
            }
            else if (attribute == "}")
                db.push_back(emp);
        }
        if (emp.getCounter() < 1e4)
            emp.setColWidth1(8);
        else if (emp.getCounter() < 1e5)
            emp.setColWidth1(9);
        else if (emp.getCounter() < 1e6)
            emp.setColWidth1(10);
        DATABASE.close();
    }
}

void saveDatabase(vector<employee>& db) {
    fstream DATABASE;
    DATABASE.open("database.txt", ios::out); // write data
    if (DATABASE.is_open()) {
        if (db.empty()) {
            DATABASE << "counter: ";
            DATABASE << 0 << endl;
            DATABASE.close();
            exit(0);
        }
        for (int i = 0; i < (int)db.size(); i++) {
            DATABASE << "{\n";
            DATABASE << "\tId: " << db[i].getId() << endl;
            DATABASE << "\tName: " << db[i].getName() << endl;
            DATABASE << "\tEmail: " << db[i].getEmail() << endl;
            DATABASE << "\tAge: " << db[i].getAge() << endl;
            DATABASE << "\tSalary: " << db[i].getSalary() << endl;
            DATABASE << "\tGender: " << db[i].getGender() << endl;
            DATABASE << "}\n";
        }
        DATABASE << "counter: ";
        employee emp;
        DATABASE << emp.getCounter() << endl;
        DATABASE.close();
    }
}
