#include "catch.hpp"
#include "../src/complex.hpp"

TEST_CASE("Test difference: (1,3) - (2,2)")
{
    Complex z1(1,3), z2(2,2);
    Complex result(-1,1);
    REQUIRE(z1 - z2 == result);
}