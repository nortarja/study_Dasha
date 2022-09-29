#include "Vector.h"
#include <iostream>

Vector::Vector(double X, double Y, double Z)
{
    this->X = X;
    this->Y = Y;
    this->Z = Z;
}

Vector::Vector(const Vector& other)
{
    this->X = other.X;
    this->Y = other.Y;
    this->Z = other.Z;
}

Vector Vector::operator+ (const Vector& other)
{
    Vector temp;
    temp.X = X + other.X;
    temp.Y = Y + other.Y;
    temp.Z = Z + other.Z;

    return temp;
}

Vector Vector::operator- (const Vector& other)
{
    Vector temp;
    temp.X = X - other.X;
    temp.Y = Y - other.Y;
    temp.Z = Z - other.Z;

    return temp;
}

unsigned int Vector::Length()
{
    length = static_cast<int>(sqrt(X * X + Y * Y + Z * Z));

    return length;
}

Vector Vector::Normalization()
{
    Vector temp;
    temp.X = X / length;
    temp.Y = Y / length;
    temp.Z = Z / length;

    return temp;
}

void Vector::PrintVector()
{
    std::cout << "(" << X << ", " << Y << ", " << Z << ")" << std::endl;
}