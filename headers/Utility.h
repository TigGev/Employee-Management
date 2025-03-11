#ifndef UTILITY_H
#define UTILITY_H
#include "Employee.h"
#include <iostream>


bool validateInputName(std::string& name);
bool validateInputBaseSalary(double salary);
bool validateInputOption(int input);
// Employee* searchEmployeeByID(int id);
void formatDisplay(Employee& emp);

#endif