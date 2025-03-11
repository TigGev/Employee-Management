#include "../headers/Company.h"
#include "../headers/Utility.h"

Company::Company(std::string name, std::string orientation, std::string director) 
    : m_companyName(name), m_orientation(orientation), m_director(director) {}

void Company::addFullTimeEmployee() {
    std::string name;
    std::cout << "Enter Employee Name: ";
    do {
        std::cin >> name;
    } while (!validateInputName(name));
    std::cout << "Enter Base Salary: ";
    double salary;
    do {
        std::cin >> salary;
    } while (!validateInputBaseSalary(salary));

    std::cout << "Select employee level - Intern(1)/Junior(2)/Middle(3)/Senior(4): ";
    int input;
    do {
        std::cin >> input;
    } while (!validateInputOption(input));
    Level level {static_cast<Level>(input)};

    input = 0;
    std::cout << "Select employee status - Active(1)/On leave(2)/Inactive(3)/Retired(4)";
    do {
        std::cin >> input;
    } while (!validateInputOption(input));
    Status status {static_cast<Status>(input)};

    std::set<Benefit> benefits;
    std::cout << "Select benefits - Gym(1)/Insurance(2)/Paid Time Off(3). Enter 0 to finish.\n";
    while (std::cout << "Enter benefit number (or 0 to finish): ") {
        std::cin >> input;

        if (input == 0) break;

        switch (input) {
            case 1: benefits.insert(Benefit::Gym); break;
            case 2: benefits.insert(Benefit::Insurance); break;
            case 3: benefits.insert(Benefit::paidTimeOff); break;
            default: std::cout << "Invalid input: Please enter a number between 1 to 3." << std::endl; continue;
        }

        std::cout << '\n';

        if (benefits.size() == 3) break;
    }

    employes.push_back(new FullTimeEmployee(name, level, status, benefits));
}


