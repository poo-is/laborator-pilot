#include <gtest/gtest.h>
#include "../complex.hpp"

TEST(plus, test_null_plus_something)
{
    Complex z1, z2(1, 2);
    Complex result(1, 2);
    EXPECT_EQ(z1 + z2, result);
}

TEST(plus, test_null_plus_null)
{
    Complex z1, z2;
    Complex result(0);
    EXPECT_EQ(z1 + z2, result);
}

TEST(plus, test_smth_plus_smth)
{
    Complex z1(1, 3), z2(1, 2);
    ASSERT_TRUE(z1 + z2 != 0);
}



int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}