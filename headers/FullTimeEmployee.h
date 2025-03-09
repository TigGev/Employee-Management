#ifndef FULL_TIME_EMPLOYEE_H
#define FULL_TIME_EMPLOYEE_H
#include "Employee.h"

class FullTimeEmployee : public Employee {
        double m_baseSalary;

    public:
        FullTimeEmployee();


        void calculateSalary() override;
        void promote() override;
        void perfomanceReview() override;
};

#endif