#ifndef PART_TIME_EMPLOYEE_H
#define PART_TIME_EMPLOYEE_H
#include "Employee.h"

class PartTimeEmployee : public Employee {
        double m_hourlyWage;
        float m_hoursWorked;

    public:
        void calculateSalary() override;
        void promote() override;
        void perfomanceReview() override;

};


#endif