#include "../headers/Employee.h"

int Employee::uniq_id {100};


Employee::Employee(const std::string& name, const Employment& employment,const Level& level, const Status& status)
    : m_employeeId(uniq_id++), m_name(name), m_employment(employment), m_level(level), m_status(status) {
    switch (m_level) {
        case Level::Intern : m_rate = 1.0; break;
        case Level::Junior : m_rate = 1.2; break;
        case Level::Middle : m_rate = 1.5; break;
        case Level::Senior : m_rate = 2.0; break;
    }
}

void Employee::promote() {
    m_rate = getRateForLevel(++m_level);
}

void Employee::display() const {
    std::cout << "ID: " << m_employeeId << ", " << "Name: " 
    << m_name << ", " << "Salary: " << calculateSalary() 
    << " (rate: "  << m_rate << "), Level: " << m_level
    << ", Employment Type: " << m_employment
    << ", Status: " << m_status;

}
