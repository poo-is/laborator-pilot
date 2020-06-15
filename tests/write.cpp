#include "catch.hpp"
#include "../src/complex.hpp"
#include <sstream>
#include <string>

bool good(char sign){
    return sign=='+' || sign=='-';
}

TEST_CASE("Test the << operator with the complex number: z(2,4)")
{
    std::stringstream input;
    double a, b;
    Complex z(2, 4);
    char sign, multiplied, i;

    input << z;
    input >> a >> sign >> b >> multiplied >> i;

    Complex result(a, b);

    REQUIRE(z == result);
    REQUIRE(good(sign));
    REQUIRE(multiplied =='*');
    REQUIRE(i == 'i');
}

