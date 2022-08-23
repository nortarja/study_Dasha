/*
* Напишите программу, которая получает число от пользователя, а потом вывод 100 следующих чисел от полученного.
*/


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int var = 0;
    const int arrSize = 100;
    int arr[arrSize];

    cout << "Введите число: " << endl;
    cin >> var;

    for (int i = 0; i < arrSize; i++)
    {
        var++;
        arr[i] = var;
    }

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
