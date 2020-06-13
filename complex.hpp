#pragma once


class Complex
{
private:
    double a, b;

public:
    Complex(double a=0.0, double b=0.0);
    Complex operator+(const Complex &z2) const;
    Complex operator-(const Complex &z2) const;
};