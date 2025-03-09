#include "../headers/Employee.h"

int Employee::uniq_id {100};

// Employee::Employee() : m_employeeId(uniq_id++) {}

Employee::Employee(const std::string& name, const Employment& employment,const Level& level) : m_employeeId(uniq_id++), m_name(name), m_employment(employment), m_level(level) {
    switch (m_level) {
        case Level::Intern : m_rate = 1.0; break;
        case Level::Junior : m_rate = 1.2; break;
        case Level::Middle : m_rate = 1.5; break;
        case Level::Senior : m_rate = 2.0; break;
    }
}

Employee& Employee::operator++ () {
    switch (m_level) {
        case Level::Intern: m_level = Level::Junior; break;
        case Level::Junior: m_level = Level::Middle; break;
        case Level::Middle: m_level = Level::Senior; break;
    }
}

void Employee::promote() {
    ++(*this);
    switch (m_level) {
        case Level::Junior : m_rate = 1.2; break;
        case Level::Middle : m_rate = 1.5; break;
        case Level::Senior : m_rate = 2.0; break;
    }
}

void Employee::display() const {
    std::cout << "ID: " << m_employeeId << ", " << "Name: " << m_name << ", " << "Salary: " << m_salary << " (rate: "  << m_rate << "), Role: ";
    switch (m_level) {
        case Level::Intern : std::cout << "Intern"; break;
        case Level::Junior : std::cout << ""; break;
        case Level::Middle : std::cout << "Intern";` break;
        case Level::Senior : std::cout << "Intern";` break;
    }
}
