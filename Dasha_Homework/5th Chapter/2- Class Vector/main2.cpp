/*
 * Создайте класс вектор, реализуйте методы сложения, вычитания, нормализации и получения длины вектора. 
 * Написать программу, демонстрирующую все возможности класса. 
 */

#include <iostream>
#include "Vector.h"

int main()
{
    double X = 0;
    double Y = 0;
    double Z = 0;

    std::cin >> X >> Y >> Z;
    Vector vector(X, Y, Z);
    std::cout << "\nLENGTH: " << vector.Length() << std::endl;
    vector = vector.Normalization();

    std::cout << "\nNORMALIZED VECTOR: ";
    vector.PrintVector();

    return 0;
}