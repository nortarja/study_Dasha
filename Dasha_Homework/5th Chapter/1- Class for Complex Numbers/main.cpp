/*
 * Создайте класс Complex, добавьте метод сложения, вычитания и произведения комплексных чисел. 
 * Написать программу, демонстрирующую все возможности класса.
 */

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    double real = 0.0;
    double imaginary = 0.0;
    char operation;
    Complex result;

    cout << "1st complex number" << endl;
    cout << "Enter real and imaginary parts through enter or spaces: " << endl << endl;
    cin >> real >> imaginary;
    Complex var1(real, imaginary);

    cout << "\n2nd complex number" << endl;
    cout << "Enter real and imaginary parts through enter or spaces: " << endl << endl;
    cin >> real >> imaginary;
    Complex var2(real, imaginary);

    cout << "\nEnter the operation + - or *" << endl;
    cin >> operation;

    switch (operation)
    {
    case '+':
    {
        result = var1 + var2;
        result.Print();
        break;
    }
    case '-':
    {
        result = var1 - var2;
        result.Print();
        break;
    }
    case '*':
    {
        result = var1 * var2;
        result.Print();
        break;
    }
    default:
    {
        cout << "You have entered wrong operation" << endl;
        break;
    }
    }

    return 0;
};