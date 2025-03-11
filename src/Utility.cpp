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
