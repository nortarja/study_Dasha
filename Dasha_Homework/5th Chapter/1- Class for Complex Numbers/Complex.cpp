#include "Complex.h"
#include <iostream>

Complex::Complex(double real)
{
    this->real = real;
};
Complex::Complex(double real, double imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
};
Complex::Complex(const Complex& other)
{
    this->real = other.real;
    this->imaginary = other.imaginary;
};

Complex& Complex::operator= (const Complex& other)
{
    real = other.real;
    imaginary = other.imaginary;
    return *this;
};
Complex Complex::operator+ (const Complex& other)
{
    Complex temp;
    temp.real = real + other.real;
    temp.imaginary = imaginary + other.imaginary;
    return temp;
};
Complex Complex::operator- (const Complex& other)
{
    Complex temp;
    temp.real = real - other.real;
    temp.imaginary = imaginary - other.imaginary;
    return temp;
};
Complex Complex::operator* (const Complex& other)
{
    Complex temp;
    temp.real = real * other.real - imaginary * other.imaginary;
    temp.imaginary = real * other.imaginary + imaginary * other.real;
    return temp;
};

void Complex::Print()
{
    std::cout << "\nResult = (" << real << ", " << imaginary << ")" << std::endl;
};