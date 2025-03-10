#include "../headers/Employee.h"

int Employee::uniq_id {100};

// Employee::Employee() : m_employeeId(uniq_id++) {}

Employee::Employee(const std::string& name, const Employment& employment,const Level& level, const Status& status)
    : m_employeeId(uniq_id++), m_name(name), m_employment(employment), m_level(level), m_status(status) {
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
        case Level::Junior : m_rate =  1.2; break;
        case Level::Middle : m_rate = 1.5; break;
        case Level::Senior : m_rate = 2.0; break;
    }
}

void Employee::display() const {
    std::cout << "ID: " << m_employeeId << ", " << "Name: " << m_name << ", " << " (rate: "  << m_rate << "), Role: ";
    switch (m_level) {
        case Level::Intern : std::cout << "Intern, "; break;
        case Level::Junior : std::cout << "Junior, "; break;
        case Level::Middle : std::cout << "Middle, "; break;
        case Level::Senior : std::cout << "Senior, "; break;
    }
    std::cout << "Employment Type: ";
    switch (m_employment) {
        case Employment::Full_time: std::cout << "Full-Time, "; break;
        case Employment::Part_time: std::cout << "Part-Time, "; break;
    }
    std::cout << "Status: ";
    switch (m_status) {
        case Status::Active: std::cout << "Active"; break;
        case Status::On_leave: std::cout << "On_leave"; break;
        case Status::Inactive: std::cout << "Inactive"; break;
        case Status::Retired: std::cout << "Retired"; break;
    }
}
