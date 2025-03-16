#include "../headers/Utility.h"

bool validateInputName(std::string& name) {
    if (name.empty()) {
        std::cout << "Incorrect input: Name cannot be empty! Please re-enter: ";
        return false;
    }

    if (!std::isupper(name[0])) {
        std::cout << "Incorrect input: Name must start with a capital letter! Please re-enter: ";
        return false;
    }

    for (char ch : name) {
        if (!(std::isalpha(ch) || ch == ' ' || ch == '_')) {
            std::cout << "Incorrect input: The name can only contain letters, spaces or underscores! Please re-enter: ";
            return false;
        }
    }
    return true;

}

bool validateInputBaseSalary(double salary) {
    if (salary <= 0) {
        std::cout << "Incorrect input: Salary cannot be negative or zero! Please re-enter: ";
        return false;
    }

    if (salary < 30) {
        std::cout << "Incorrect input: The salary is too low! Please re-enter: ";
        return false;
    }

    if (salary > 500000) {
        std::cout << "Incorrect input: The salary is too high! Please re-enter: ";
        return false;
    }
    return true;
}

bool validateInputOption(int input) {
    if (input >= 1 && input <= 4) return true;
    std::cout << "Incorrect input: Please select a number from 1 to 4! Please re-enter: ";
    std::cin.clear();
    return false;
}

bool validateInputHourlyWage(double hourlyWage) {
    const double MIN_WAGE = 5.00;
    const double MAX_WAGE = 500.00;

    if (std::cin.fail()) {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a numeric value: ";
            return false;
        }

        if (hourlyWage < MIN_WAGE || hourlyWage > MAX_WAGE) {
            std::cout << "Error: Wage must be between $" << MIN_WAGE << " and $" << MAX_WAGE << ". Try again: ";
            return false;
        }
        return true;
}

float getValidHoursWorked() {
    float hours;
    const float MIN_HOURS = 0.5;  
    const float MAX_HOURS = 100.0;

    std::cout << "Enter hours worked: ";
    
    while (true) {
        std::cin >> hours;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a numeric value: ";
            continue;
        }

        if (hours < MIN_HOURS || hours > MAX_HOURS) {
            std::cout << "Error: Hours must be between " << MIN_HOURS << " and " << MAX_HOURS << ". Try again: ";
            continue;
        }
        break;
    }

        return hours;

}