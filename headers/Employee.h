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
        Status m_status;
        double m_rate;
    public:
        Employee(const std::string& name, const Employment& employment,const Level& level, const Status& status);
        virtual ~Employee() = default;
        Employee& operator++ ();

        virtual double calculateSalary() const = 0;
        virtual void promote();
        virtual void display() const;
        

        std::string getName() const {return m_name;}
        Level getLevel() const {return m_level;}
        double getRate() const {return m_rate;}
        Employment getEmployment() const {return m_employment;}
        int getEmployeeId() const {return m_employeeId;}

};





#endif