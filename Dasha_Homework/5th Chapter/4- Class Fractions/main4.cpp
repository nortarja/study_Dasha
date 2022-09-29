/*
 * Создать класс дробей – рациональных чисел, являющихся отношением двух целых чисел. 
 * Предусмотреть методы сложения, вычитания, умножения и деления дробей. 
 * Написать программу, демонстрирующую все возможности класса.
 */

#include "Fractions.h"
#include <iostream>

bool CheckDenominator(int denominator);

int main()
{
    int numerator = 0; 
    int denominator = 1;
    char operation;

    std::cout << "1st fraction: " << std::endl;
    std::cout << "Enter numerator and denominator: " << std::endl; 
    std::cin >> numerator >> denominator;
    
    if (CheckDenominator(denominator))
    {
        return 0;
    }

    Fractions fraction1(numerator, denominator);

    std::cout << "2nd fraction: " << std::endl;
    std::cout << "Enter numerator and denominator: " << std::endl;
    std::cin >> numerator >> denominator;

    if (CheckDenominator(denominator))
    {
        return 0;
    }

    Fractions fraction2(numerator, denominator);

    std::cout << "Enter operation: + - * /" << std::endl;
    std::cin >> operation;

    Fractions result;

    switch (operation)
    {
    case '+':
    {
        result = fraction1 + fraction2;
        break;
    }
    case '-':
    {
        result = fraction1 - fraction2;
        break;
    }
    case '*':
    {
        result = fraction1 * fraction2;
        break;
    }
    case '/':
    {
        result = fraction1 / fraction2;
        break;
    }
    default:
    {
        break;
    }
    }

    result.Reduction();
    std::cout << "RESULT = ";
    result.Print();

    return 0;
}

bool CheckDenominator(int denominator)
{
    if (denominator == 0)
    {
        std::cout << "Division by zero is forbidden. Please, enter another number" << std::endl;
        return true;
    }
    return false;
}

