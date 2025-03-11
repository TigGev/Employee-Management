#ifndef EMPLOYEE_STATUS_H
#define EMPLOYEE_STATUS_H

enum class Employment  {Part_time, Full_time};
enum class Status {Active, On_leave, Inactive, Retired};
enum class Level {Intern, Junior, Middle, Senior};

Level& operator++(Level& level);
std::ostream& operator<< (std::ostream& output, Level& level);
std::ostream& operator<< (std::ostream& output, Employment& employment);
std::ostream& operator<< (std::ostream& output, Status& status);
double getRateForLevel(Level& level);

#endif