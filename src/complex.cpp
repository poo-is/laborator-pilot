#include "complex.hpp"

Complex::Complex(double a, double b) : a(a), b(b) {}

Complex Complex::operator+(const Complex &z2) const
{
    Complex sum(this->a + z2.a, this->b + z2.b);
    return sum;
}
bool Complex::operator!=(const Complex &z2) const
{
    return !(z2 == *this);
}

Complex Complex::operator-(const Complex &z2) const
{
    Complex diff(this->a - z2.a, this->b - z2.b);
    return diff;
}

bool Complex::operator==(const Complex &z2) const
{
    return this->a == z2.a && this->b == z2.b;
}

std::ostream &operator<<(std::ostream &os, const Complex &z)
{
    os << z.a << " + " << z.b << "*i";
    return os;
}
Complex Complex::operator*(const Complex &z2) const
{
    return Complex(this->a * z2.a - this->b * z2.b, z2.b * this->a + z2.a * this->b);
}

std::istream &operator>>(std::istream &is, Complex &z){
    is>>z.a>>z.b;
    return is;
}