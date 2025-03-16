#include "../headers/Employee.h"
#include <iostream>

Level& operator++(Level& level) {
    switch (level) {
        case Level::Intern: level = Level::Junior; break;
        case Level::Junior: level = Level::Middle; break;
        case Level::Middle: level = Level::Senior; break;
    }
    return level;
}

std::ostream& operator<< (std::ostream& output, Level level) {
    switch (level) {
        case Level::Intern : output << "Intern"; break;
        case Level::Junior : output << "Junior"; break;
        case Level::Middle : output << "Middle"; break;
        case Level::Senior : output << "Senior"; break;
    }
    return output;
}

std::ostream& operator<< (std::ostream& output, Employment& employment) {
    switch (employment) {
        case Employment::Full_time: output << "Full-Time, "; break;
        case Employment::Part_time: output << "Part-Time, "; break;
    }
    return output;
}

std::ostream& operator<< (std::ostream& output, Status& status) {
    switch (status) {
        case Status::Active: output << "Active"; break;
        case Status::On_leave: output << "On_leave"; break;
        case Status::Inactive: output << "Inactive"; break;
        case Status::Retired: output << "Retired"; break;
    }
    return output;
}

double getRateForLevel(Level& level) {
    switch (level) {

        case Level::Junior : return 1.2; break;
        case Level::Middle : return 1.5; break;
        case Level::Senior : return 2.0; break;
    }
}

// std::string toString(Level& level) {
//     switch (level) {
//         case Level::Intern : return "Intern"; break;
//         case Level::Junior : return "Junior"; break;
//         case Level::Middle : return "Middle"; break;
//         case Level::Senior : return "Senior"; break;
//     }
// }

// std::string toString(Employment& employment) {
//     switch (employment) {
//         case Employment::Full_time: return "Full-Time, "; break;
//         case Employment::Part_time: return "Part-Time, "; break;
//     }
// }

// std::string toString(Status& status) {
    // switch (status) {
    //     case Status::Active: return "Active"; break;
    //     case Status::On_leave: return "On_leave"; break;
    //     case Status::Inactive: return "Inactive"; break;
    //     case Status::Retired: return "Retired"; break;
    // }
// }
