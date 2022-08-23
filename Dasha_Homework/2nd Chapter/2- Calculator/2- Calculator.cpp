/*
Написать простой калькулятор. Пользователь вводит значение двух переменных. 
Описать меню в консоли для математических операций сложения, вычитания, умножения, деления. 
Через оператор switch реализовать математическую операцию соответствующую пункту меню.
*/


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    float var1 = 0.f;
    float var2 = 0.f;
    float result = 0.f;
    char symbol = ' ';

    cout << "Введите число 1: " << endl;
    cin >> var1;

    cout << "Введите число 2: " << endl;
    cin >> var2;

    cout << "Выберите операцию из предложенного списка: +, -, *, / " << endl;
    cin >> symbol;

    switch (symbol)
    {
        case '+':
            result = var1 + var2;
            cout << var1 << " + " << var2  << " = " << result << endl;
            break;
        case '-':
            result = var1 - var2;
            cout << var1 << " - " << var2 << " = " << result << endl;
            break;
        case '*':
            result = var1 * var2;
            cout << var1 << " * " << var2 << " = " << result << endl;
            break;
        case '/':
            if (var2 == 0)
            {
                cout << "Делить на ноль нельзя!" << endl;
            }
            else
            {
                result = var1 / var2;
                cout << var1 << " / " << var2 << " = " << result << endl;
            }
            break;
        default:
            cout << "Вы ввели несуществующую операцию. " << endl;
            break;

    }

    return 0;
}