#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"

class Company {
        std::string m_companyName;
        std::string m_orientation;
        std::string m_director;
        std::vector<Employee*> employes;
        
    public:
        Company(std::string name, std::string orientation, std::string director);
        ~Company();
        std::string getName() const {return m_director;}
        std::string getOrientation() const {return m_orientation;}
        std::string getDirectorName() const {return m_companyName;}

        void addFullTimeEmployee();
        void addPartTimeEmployee();
        void searchEmployeeById(int id);
        void showAllEmployees() const;
        void promoteAnEmployee(int Id);

};

#endif