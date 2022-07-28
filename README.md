# Employee Console App

C++ console software of a simple CRUD program to deal with employee database and print them with a dynamic columns sized according to existing data.

## Table of Contents

* [Usage](#usage)
* [Features](#features)
* [Add Employees](#add-employees)
* [Print Employees](#print-employees)
* [Search For Employees](#search-for-employees)
* [Update Employees](#update-employees)
* [Delete Employees](#delete-employees)
* [Save/Load Database](#saveload-database)

## Usage

You can run the program in linux and windows:

### Windows
`./bin/windows/employee_system.exe`

### Linux
`./bin/linux/employee_system`

## Features

- Add employees
- Print all employees
- Search for employees
- Update existing employess
- Delete employees
- Save/Load from database

## Add Employees

Each employee has the following data:
- **Id** each employee has a unique id
- **Name**
- **Email** with email verification feature
- **Age**
- **Salary**
- **Gender**

## Print Employees

Print all employees in the database with a key feature of auto adjusting columns width according to existing data.

## Search For Employees

Search for employees in database using:
- **Name** with substring searching algorithm and non-case sensitive
- **Email** with substring searching algorithm and non-case sensitive
- **Age range**
- **Salary range**

## Update Employees

By selecting an employee using his/her id number

## Delete Employees

Select and delete employees using:
- **Employee id**
- **Age range**
- **Salary range**

## Save/Load Database

Database is saved automatically when you close program.
*Hint* database will be saved only when you close the program by entering "7" not by clicking the "X" button in the top window.
Database is saved in a readable txt file in the same direction of the program.
