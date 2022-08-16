/*
    Написать программу подсчета «Хороших»  чисел в диапазоне от 1 до 1000000.
    Хорошим называется число, которое делится на сумму своих цифр.
*/

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");

    int minVar = 1; // первое число в последовательности
    int maxVar = 1000000; // последнее число в последовательности
    int temp; // вспомогательная переменная, нужна для подстановки вместо minVar (чтобы не изменять саму minVar)
    int goodNumberSum = 0; // сумма цифр внутри текущего числа
    int resultSum = 0; // итоговая СУММА всех хороших чисел в последовательности
    int resultCount = 0; // итоговое КОЛИЧЕСТВО всех хороших чисел в последовательности

    for (minVar; minVar <= maxVar; minVar++)
    {
        temp = minVar;
        while (temp != 0)
        {
            goodNumberSum += temp % 10; // вычисляется последняя цифра числа
            temp /= 10; // число сокращается на 1 цифру
        }

        if (minVar % goodNumberSum == 0) // определяю, хорошее число или нет
        {
            resultSum += minVar;
            resultCount += 1;
        }
        goodNumberSum = 0;

    }

    cout << "Сумма всех \"хороших\" чисел = " << resultSum << endl;
    cout << "Количество \"хороших\" чисел = " << resultCount << endl;

    return 0;
}
