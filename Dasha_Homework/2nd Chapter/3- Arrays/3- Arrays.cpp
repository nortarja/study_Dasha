/*
* Дан целочисленный массив из 20 элементов, заполненный числами от -10000 до 10000. 
* Написать программу, позволяющую найти и вывести количество пар элементов массива, в которых хотя бы одно число делится на 3. 
* Парой являются два подряд идущих значения. Также программа должна в конце выводить все эти пары.
*/


#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    const int minArray = -10;
    const int maxArray = 10;
    const int SIZE = 20;
    int arr[SIZE];
    int countPairNumbers = 0;

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % (maxArray - minArray + 1) + minArray;
    }
 
    cout << "Сгенерировался массив: " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nСписок пар: " << endl;

    for (int i = 0; i < SIZE - 1; i++)
    {
        if ((arr[i] % 3 == 0) || (arr[i + 1] % 3 == 0))
        {
            countPairNumbers++;
            cout << arr[i] << ", " << arr[i + 1] << endl; 
        }
    }

    cout << endl;
    cout << "Количество пар: " << countPairNumbers << endl;

    return 0;
}

