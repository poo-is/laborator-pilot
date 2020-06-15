#include "catch.hpp"
#include "../src/complex.hpp"
#include <sstream>
#include <string>

TEST_CASE("Test the >> operator with input: 2 4")
{
    std::string input_string = "2 4";
    std::stringstream cin(input_string);
    Complex z, result(2, 4);
    cin >> z;

    REQUIRE(z == result);
}

TEST_CASE("Test the >> operator for multiple reads with input: 2 4 3 2")
{
    std::string input_string = "2 4 3 2";
    std::stringstream cin(input_string);
    Complex z1, z2, result1(2, 4), result2(3, 2);
    cin >> z1 >> z2;
    
    REQUIRE(z1 == result1);
    REQUIRE(z2 == result2);
}
