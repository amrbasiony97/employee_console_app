#include "../include/delete_.h"

void deleteById(vector<employee>& db) {
    string id = getEmployeeId();
    for (int i = 0; i < (int)db.size(); i++) {
        if (db[i].getId() == id) {
            employee emp = db[i];
            db.erase(db.begin() + i);
            updateAllColWidth(db, emp);
            cout << "1 employee has been deleted successfully!\n";
            return;
        }
    }
    cout << "There is no employee to delete with such Id!\n";
}

void deleteByAge(vector<employee>& db) {
    int start, end, cnt{ 0 };
    enterNumberQuery(start, end, "age");
    for (int i = 0; i < (int)db.size(); i++) {
        if (db[i].getAge() >= start && db[i].getAge() <= end) {
            employee emp = db[i];
            db.erase(db.begin() + i);
            updateAllColWidth(db, emp);
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "There is no employee to delete with such conditions!\n";
    else if (cnt == 1)
        cout << cnt << " employee has been deleted successfully!\n";
    else
        cout << cnt << " employees have been deleted successfully!\n";
}

void deleteBySalary(vector<employee>& db) {
    int start, end, cnt{ 0 };
    enterNumberQuery(start, end, "salary");
    for (int i = 0; i < (int)db.size(); i++) {
        updateAllColWidth(db, db[i]);
        if (db[i].getSalary() >= start && db[i].getSalary() <= end) {
            employee emp = db[i];
            db.erase(db.begin() + i);
            updateAllColWidth(db, emp);
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "There is no employee to delete with such conditions!\n";
    else if (cnt == 1)
        cout << cnt << " employee has been deleted successfully!\n";
    else
        cout << cnt << " employees have been deleted successfully!\n";
}

void deleteEmployee(vector<employee>& db) {
    cout << "\nDelete employees using:\n";
    cout << "1) Id\n";
    cout << "2) Age range\n";
    cout << "3) Salary range\n";
    cout << "\nDelete > ";
    int choice;
    while (!(cin >> choice) || choice < 1 || choice > 3) {
        cin.clear();
        cin.ignore(200, '\n');
        cout << "Invalid input, try again!\n";
    }
    switch (choice) {
    case 1:
        deleteById(db);
        break;
    case 2:
        deleteByAge(db);
        break;
    case 3:
        deleteBySalary(db);
        break;
    default:
        cout << "Invalid input\n";
    }
}
