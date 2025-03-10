#include <gtest/gtest.h>
#include "../headers/PartTimeEmployee.h"

TEST(PartTimeEmployeeTest, PartTimeEmployeeParamConstructor) {
    PartTimeEmployee pemp("Adam", Level::Middle);
    EXPECT_EQ(pemp.getName(), "Adam");
    EXPECT_EQ(pemp.getEmployment(), Employment::Part_time);
    
}