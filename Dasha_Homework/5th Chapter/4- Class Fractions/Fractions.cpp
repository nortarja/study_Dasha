#include "Fractions.h"
#include "math.h"
#include <iostream>

Fractions::Fractions(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
}

Fractions::Fractions(const Fractions& other)
{
    this->numerator = other.numerator;
    this->denominator = other.denominator;
}

Fractions Fractions::operator+ (const Fractions& other)
{
    Fractions temp;

    if (denominator == other.denominator)
    {
        temp.numerator = numerator + other.numerator;
        temp.denominator = denominator;
    }
    else
    {
        temp.denominator = denominator * other.denominator;
        temp.numerator = (numerator * other.denominator) + (other.numerator * denominator);
    }

    return temp;
}

Fractions Fractions::operator- (const Fractions& other)
{
    Fractions temp; 

    if (denominator == other.denominator)
    {
        temp.numerator = numerator - other.numerator;
        temp.denominator = denominator;
    }
    else
    {
        temp.denominator = denominator * other.denominator;
        temp.numerator = (numerator * other.denominator) - (other.numerator * denominator);
    }

    return temp;
}

Fractions Fractions::operator* (const Fractions& other)
{
    Fractions temp;

    temp.numerator = numerator * other.numerator;
    temp.denominator = denominator * other.denominator;

    return temp;
}

Fractions Fractions::operator/ (const Fractions& other)
{
    Fractions temp;

    temp.numerator = numerator * other.denominator;
    temp.denominator = denominator * other.numerator;

    return temp;
}

Fractions& Fractions::Reduction()
{
    int lowestDenominator = 0;
    int i = 0;

    do 
    {
        if (abs(numerator) < abs(denominator))
        {
            lowestDenominator = numerator;
        }
        else
        {
            lowestDenominator = denominator;
        }

        for (i = abs(lowestDenominator); i > 0; i--)
        {
            if (!(numerator % i) && !(denominator % i))
            {
                numerator = numerator / i;
                denominator = denominator / i;
                break;
            }
        }

    } while (i != 1);
            
    return *this;
}

void Fractions::Print()
{
    std::cout << numerator << " / " << denominator;
}