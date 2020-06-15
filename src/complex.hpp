#pragma once
#include <iostream>

class Complex
{
private:
    double a, b;

public:
    Complex(double a = 0.0, double b = 0.0);
    Complex operator+(const Complex &z2) const;
    Complex operator-(const Complex &z2) const;
    bool operator==(const Complex &z2) const;
    bool operator!=(const Complex &z2) const;
    Complex operator*(const Complex &z2) const;
    friend std::ostream &operator<<(std::ostream &os, const Complex &z);
    friend std::istream &operator>>(std::istream &is, Complex &z);
};