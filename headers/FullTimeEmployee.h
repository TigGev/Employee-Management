#ifndef FULL_TIME_EMPLOYEE_H
#define FULL_TIME_EMPLOYEE_H
#include "Employee.h"
#include <set>
#include <optional>

enum class Benefit {Insurance, Gym, paidTimeOff};

class FullTimeEmployee : public Employee {
        std::set<Benefit> m_benefits;
    public:
        FullTimeEmployee(const std::string& name, const Level& level, std::set<Benefit> benefits = std::set<Benefit>{});

        void display() const override;
        double calculateSalary() const override;

        std::set<Benefit> getBenefit() const {return m_benefits;}
};

#endif