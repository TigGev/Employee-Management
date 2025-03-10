#include "../headers/FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(const std::string& name, const Level& level, const Status& status, std::set<Benefit> benefits = std::set<Benefit>{})
    : Employee(name, Employment::Full_time, level, status) {
        m_benefits = std::move(benefits);
}

double FullTimeEmployee::calculateSalary() const {
    return m_baseSalary * m_rate;
}



void FullTimeEmployee::display() const {
    Employee::display();
    std::cout << "Benefits: (";
    if (m_benefits.empty()) {
        std::cout << "No benefits";
    }
    else {
        for (const auto& benefit : m_benefits) {
            switch (benefit) {
                case Benefit::Gym: std::cout << "Gym/"; break;
                case Benefit::Insurance: std::cout << "Insurance/"; break;
                case Benefit::paidTimeOff: std::cout << "paidTimeOff/"; break;
            }
        }
        std::cout << ")" << std::endl;
    }
}

