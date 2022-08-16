/*
    С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать сумму всех нечетных положительных чисел.
*/

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");

    int inputVar = 0;
    int sum = 0;

    cout << "Вводите числа: " << endl;
    
    do
    {
        cin >> inputVar;
        if (inputVar != 0 && inputVar % 2 == 1 && inputVar > 0)
        {
            sum += inputVar;
        }
    }
    while (inputVar != 0);

    cout << "Сумма чисел = " << sum;
    return 0;
}