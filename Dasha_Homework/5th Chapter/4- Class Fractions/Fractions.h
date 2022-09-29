#pragma once

class Fractions
{
public:
    Fractions() {}
    Fractions(int numerator, int denominator);
    Fractions(const Fractions& other);

    ~Fractions() {}

    Fractions operator+ (const Fractions& other);
    Fractions operator- (const Fractions& other);
    Fractions operator* (const Fractions& other);
    Fractions operator/ (const Fractions& other);

    Fractions& Reduction();
    void Print();

private:
    int numerator = 0;
    int denominator = 1;
};