#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

enum class Employment  {Part_time, Full_time};
enum class Status {Active, On_leave, Inactive, Retired};
enum class Level {Intern, Junior, Middle, Senior};

class Employee {
    protected:
        static int uniq_id;
        int m_employeeId;
        std::string m_name;
        Employment m_employment; 
        Level m_level;
        double m_salary;
        double m_rate;
        // double m_perfomance; //0% - 100
    public:
        // Employee();
        Employee(const std::string& name, const Employment& employment,const Level& level);
        virtual ~Employee();
        Employee& operator++ ();
        // Employee(const Employee& other);

        virtual void calculateSalary() = 0;
        virtual void promote();
        virtual void perfomanceReview() = 0;
        // void updateRole();
        void display() const;
};





#endif