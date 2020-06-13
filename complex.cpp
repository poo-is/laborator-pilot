#include "complex.hpp"

Complex::Complex(double a, double b) : a(a), b(b) {}

Complex Complex::operator+(const Complex &z2) const
{
    Complex sum(this->a + z2.a, this->b + z2.b);
    return sum;
}

Complex Complex::operator-(const Complex &z2) const
{
    Complex diff(this->a - z2.a, this->b - z2.b);
    return diff;
}
