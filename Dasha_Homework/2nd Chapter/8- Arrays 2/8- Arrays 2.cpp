/*
* Создайте массив целых чисел из 20 элементов и заполните его рандомными числами от 0 до 100. 
* Напишите программу, которая получает число от 0 до 100 от пользователя и выводит в консоль 
* есть ли это число в массиве и если есть, то должен быть выведен индекс элемента. 
*/


#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    
    const int SIZE = 20;
    int arr[SIZE];
    int var = 0;

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand()%100;
    }

    cout << "Введите число: " << endl; 
    cin >> var; 

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] != var)
        {
            continue;
        }
        else
        {
            cout << "В массиве есть такое число. Его индекс = " << i << endl;
            break;
        }
    }

    cout << "\nБыл сгенерирован массив: " << endl; 

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

