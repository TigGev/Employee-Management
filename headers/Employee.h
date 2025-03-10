#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "EmployeeStatus.h"
#include <iostream>



class Employee {
    protected:
        static int uniq_id;
        int m_employeeId;
        std::string m_name;
        Employment m_employment; 
        Level m_level;
        Status m_status;
        double m_rate;
    public:
        Employee(const std::string& name, const Employment& employment,const Level& level, const Status& status);
        virtual ~Employee() = default;
        // Employee& operator++ ();

        virtual double calculateSalary() const = 0;
        virtual void promote();
        virtual void display() const;
        

        std::string getName() const {return m_name;}
        Level getLevel() const {return m_level;}
        double getRate() const {return m_rate;}
        Employment getEmployment() const {return m_employment;}
        int getEmployeeId() const {return m_employeeId;}
        Status getStatus() const {return m_status;}

};





#endif