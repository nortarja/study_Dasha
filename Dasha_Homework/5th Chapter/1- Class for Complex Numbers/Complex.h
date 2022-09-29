#pragma once

class Complex
{
public:
    Complex() {}
    Complex(double real);
    Complex(double real, double imaginary);
    Complex(const Complex& other);

    ~Complex() {}

    Complex& operator= (const Complex& other);
    Complex operator+ (const Complex& other);
    Complex operator- (const Complex& other);
    Complex operator* (const Complex& other);

    void Print();

private:
    double real = 0.0;
    double imaginary = 0.0;
};