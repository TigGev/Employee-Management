#include <gtest/gtest.h>
#include "../headers/Employee.h"

TEST(EmployeeTest, ConstructorInitialization) {
    Employee emp("Alice", Employment::Full_time, Level::Junior);
    EXPECT_EQ(emp.getName(), "Alice");
    EXPECT_EQ(emp.getEmployment(), Employment::Full_time);
    EXPECT_EQ(emp.getLevel(), Level::Junior);
    EXPECT_DOUBLE_EQ(emp.getRate(), 1.2);
}

TEST(EmployeeTest, PromotionOperator) {
    Employee emp("Bob", Employment::Full_time, Level::Intern);
    ++emp;
    EXPECT_EQ(emp.getLevel(), Level::Junior);
}

TEST(EmployeeTest, PromoteMethod) {
    Employee emp ("Charlie", Employement::Part_time, Level::Junior);
    emp.promote();
    EXPECT_EQ(emp.getLevel(), Level::Middle);
    EXPECT_DOUBLE_EQ(emp.getRate(), 1.5);
}

TEST(EmployeeTest, PromotionSeniorBoundary) {
    Employee emp ("Dana", Employement::Full_time, Level::Senior);
    emp.promote();
    EXPECT_EQ(emp.getLevel(), Level::Senior);
    EXPECT_DOUBLE_EQ(emp.getRate(), 2.0);
}

TEST(EmployeeTest, DisplayMethod) {
    Employee emp("Eve", Employment::Part_time, Level::Intern);
    emp.display();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("ID:"), std::string::npos);
    EXPECT_NE(output.find("Name: Eve"), std::string::npos);
    EXPECT_NE(output.find("Intern"), std::string::npos);
    EXPECT_NE(output.find("Part_time"), std::string::npos);
}

TEST(EmployeeTest, UniqueEmployeeID) {
    Employee emp1("Alice", Employment::Full_time, Level::Junior);
    Employee emp2("Bob", Employment::Part_time, Level::Intern);
    EXPECT_NE(emp1.getEmployeeId(), emp2.getEmployeeId());
}