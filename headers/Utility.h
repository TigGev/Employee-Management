#ifndef UTILITY_H
#define UTILITY_H
#include "Employee.h"
#include <iostream>


bool validateInputName(std::string& name);
bool validateInputBaseSalary(double salary);
bool validateInputOption(int input);
bool validateInputHourlyWage(double hourlyWage);
float getValidHoursWorked();
// Employee* searchEmployeeByID(int id);
#endif