#include "catch.hpp"
#include "../src/complex.hpp"

TEST_CASE("Test the product: (1,0) * (0,1)"){
    Complex z1(1,0),z2(0,1);
    Complex result(0,1);
    REQUIRE(z1*z2 == result);
}

TEST_CASE("Test the product: (1,1) * (1,-1)"){
    Complex z1(1,1),z2(1,-1);
    Complex result(2,0);
    REQUIRE(z1*z2 == result);
}


TEST_CASE("Test the product: (2,5) * (4,2)"){
    Complex z1(2,5),z2(4,2);
    Complex result(-2,24);
    REQUIRE(z1*z2 == result);
}