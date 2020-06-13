#include "catch.hpp"
#include "../src/complex.hpp"

TEST_CASE("Test sum: (0,0) + (1,2) ")
{
    Complex z1, z2(1, 2);
    Complex result(1, 1);
    REQUIRE(z1 + z2 == result);
}

TEST_CASE("Test sum: (0,0) + (0,0) ")
{
    Complex z1, z2;
    Complex result(0);
    REQUIRE(z1 + z2 == result);
}

TEST_CASE("Test sum: (1,3) + (1,2) ")
{
    Complex z1(1, 3), z2(1, 2);
    REQUIRE(z1 + z2 != 0);
}