#include <gtest/gtest.h>
#include "Factorial.h"

TEST(CombinatoriaTest, Factorial) {
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(0), 1);
}

TEST(CombinatoriaTest, Combinacion) {
    EXPECT_EQ(combinacion(5, 2), 10);
    EXPECT_THROW(combinacion(5, -1), std::runtime_error);
    EXPECT_THROW(combinacion(5, 6), std::runtime_error);
}
