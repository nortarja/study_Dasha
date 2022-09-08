/*
 * Напишите функцию setValue(), которая будет принимать на вход целое число и менять его значение на 1. 
 * Напишите программу, которая просит у пользователя написать ввести число, после вызывается setValue для этого числа, 
 * и в конце необходимо вывести число в консоль
*/

#include <iostream>

using namespace std;

void setValue(int &var);

void main()
{
    int number = 0; 
    cout << "Enter number: ";
    cin >> number; 

    setValue(number);

    cout << "\nnumber = " << number << endl;
}

void setValue(int &var)
{
    var++;
}