#include "../headers/PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(const std::string& name, const Level& level, const Status& status) 
    : Employee(name, Employment::Part_time, level, status) {}

void PartTimeEmployee::setHourlyWage(double hourlyWage) {m_hourlyWage = hourlyWage;}

void PartTimeEmployee::setHoursWorked(float hoursWorked) {m_hoursWorked = hoursWorked;}

double PartTimeEmployee::calculateSalary() const {
    return m_hoursWorked * m_hourlyWage * m_rate;
}
