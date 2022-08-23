/*
* Написать программу, которая получает 4 числа от пользователя, далее данные числа должны быть сохранены в массив double. 
* В конце программа должны выводить сумму всех чисел, а также адреса первого и последнего элементов массива
*/


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    double var1 = 0;
    double var2 = 0;
    double var3 = 0;
    double var4 = 0;
    const int SIZE = 4;
    double array[SIZE];
    double sum = 0;

    cout << "Введите 4 числа через пробел: " << endl; 
    cin >> var1 >> var2 >> var3 >> var4;

    array[0] = var1;
    array[1] = var2;
    array[2] = var3;
    array[3] = var4;

    for (int i = 0; i < SIZE; i++)
    {
        sum += array[i];
    }

    cout << "Сумма элементов массива = " << sum << endl; 
    cout << "Адрес первого элемента массива = " << &array << endl;
    cout << "Адрес последнего элемента массива = " << &array[SIZE-1] << endl;

    return 0;
}

