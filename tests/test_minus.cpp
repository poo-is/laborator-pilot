#include <gtest/gtest.h>
#include "../complex.hpp"

TEST(minus, test_null_minus_null)
{
    Complex z1, z2;
    Complex result(0);
    EXPECT_EQ(z1 - z2, result);
}