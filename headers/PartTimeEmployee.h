#ifndef PART_TIME_EMPLOYEE_H
#define PART_TIME_EMPLOYEE_H
#include "Employee.h"

class PartTimeEmployee : public Employee {
        double m_hourlyWage = 0;
        float m_hoursWorked = 0;

    public:
        PartTimeEmployee(const std::string& name, const Level& level);

        void promote() override;
        void display() const override;
        double calculateSalary() const override;

        void setHourlyWage(double hourlyWage);
        void setHoursWorked(float hoursWorked);
        double getHourlyWage() const {return m_hourlyWage;}
        float getHoursWorked() const {return m_hoursWorked;} 
};


#endif