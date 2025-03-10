#include <gtest/gtest.h>
#include "../headers/FullTimeEmployee.h"
#include <set>
#include <optional>

TEST(FullTimeEmployeeTest, FullTimeEmployeeConstructor) {
    FullTimeEmployee femp("Gorge", Level::Middle, {Benefit::Gym, Benefit::Insurance});
    EXPECT_EQ(femp.getName(), "Gorge");
    EXPECT_EQ(femp.getEmployment(), Employment::Full_time);
    EXPECT_EQ(femp.getLevel(), Level::Middle);
    EXPECT_DOUBLE_EQ(femp.getRate(), 1.5);
    auto benefits = femp.getBenefit()
    // ASSERT_TRUE(benefits.has_value());
    EXPECT_EQ(benefits.size(), 2)
    EXPECT_TRUE(benefits->count(Benefit::Gym)); // return the number of matches (1 or 0)
    EXPECT_TRUE(benefits->count(Benefit::Insurance));
}

TEST(FullTimeEmployeeTest, ReturnsNoBenefitsWhenNullopt) {
    FullTimeEmployee femp("Anna", Level::Junior); // m_benefit default value is std::set<Benefit>{}

    auto benefits = getBenefit();
    EXPECT_TRUE(benefits.empty());
}

TEST(FullTimeEmployeeTest, FullTimeEmployeeCalulayeSalaryTest) {
    FullTimeEmployee femp("Bob", Level::Senior, {Benefit::Gym});
    EXPECT_EQ(femp.c)
}