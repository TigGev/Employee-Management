#include <gtest/gtest.h>
#include "../headers/PartTimeEmployee.h"

TEST(PartTimeEmployeeTest, PartTimeEmployeeParamConstructor) {
    PartTimeEmployee pemp("Adam", Level::Middle, Status::Active);
    EXPECT_EQ(pemp.getName(), "Adam");
    EXPECT_EQ(pemp.getEmployment(), Employment::Part_time);
    EXPECT_EQ(pemp.getLevel(), Level::Middle);
    EXPECT_DOUBLE_EQ(pemp.getRate(), 1.5);
    EXPECT_EQ(pemp.getStatus(), Status::Active);
    pemp.setHourlyWage(23.5);
    pemp.setHoursWorked(4);
    EXPECT_EQ(pemp.getHourlyWage(), 23.5);
    EXPECT_EQ(pemp.getHoursWorked(), static_cast<double>(4));
}

