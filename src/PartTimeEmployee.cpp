#include "../headers/PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(const std::string& name, const Level& level) : Employee(name, Employment::Part_time, level) {}