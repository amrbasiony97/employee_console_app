#include "../include/employee_system.h"

void employeeSystem::run() {
     loadDatabase(database);
     cout << "<<< Employee management system software >>>\n";
     printHelp();
     int choice;
     while (true) {
         cout << "\nHome > ";
         cin >> choice;
         switch (choice) {
         case 1:
             emp = addEmployee();
             database.push_back(emp);
             break;
         case 2:
             printEmployees(database);
             break;
         case 3:
             searchEmployees(database);
             break;
         case 4:
             updateEmployee(database);
             break;
         case 5:
             deleteEmployee(database);
             break;
         case 6:
             printHelp();
             break;
         case 7:
             saveDatabase(database);
             exit(0);
         default:
             cin.clear();
             cin.ignore(200, '\n');
             cout << "Invalid input, try again: ";
         }
     }
}
