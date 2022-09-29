#pragma once

class Vector
{
public:
    Vector() {}
    Vector(double X, double Y, double Z);
    Vector(const Vector& other);

    Vector operator+ (const Vector& other);
    Vector operator- (const Vector& other);

    ~Vector() {}

    unsigned int Length();
    Vector Normalization();
    void PrintVector();

private:
    double X = 0;
    double Y = 0;
    double Z = 0;
    unsigned int length = 0;
};