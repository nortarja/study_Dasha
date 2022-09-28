/*
 * Создайте класс Complex, добавьте метод сложения, вычитания и произведения комплексных чисел. 
 * Написать программу, демонстрирующую все возможности класса.
 */

#include <iostream>
using namespace std;

class Complex
{
public:
    Complex()
    {
    };
    Complex(double real)
    {
        this->real = real;
    };
    Complex(double real, double imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    };
    Complex(const Complex& other)
    {
        this->real = other.real;
        this->imaginary = other.imaginary;
    };

    ~Complex()
    {
    };

    Complex& operator = (const Complex& other)
    {
        this->real = other.real;
        this->imaginary = other.imaginary;
        return *this;
    };
    Complex operator + (const Complex& other)
    {
        Complex temp;
        temp.real = this->real + other.real;
        temp.imaginary = this->imaginary + other.imaginary;
        return temp;
    };
    Complex operator - (const Complex& other)
    {
        Complex temp; 
        temp.real = this->real - other.real;
        temp.imaginary = this->imaginary - other.imaginary;
        return temp;
    };
    Complex operator * (const Complex& other)
    {
        Complex temp;
        temp.real = this->real * other.real - this->imaginary * other.imaginary;
        temp.imaginary = this->real * other.imaginary + this->imaginary * other.real;
        return temp;
    };

    void Print()
    {
        cout << "\nResult = (" << this->real << ", " << this->imaginary << ")" << endl;
    };

private:
    double real = 0.0;
    double imaginary = 0.0;
};

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