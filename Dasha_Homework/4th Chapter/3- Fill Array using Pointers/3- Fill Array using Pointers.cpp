/*
 * Создайте массив из пяти элементов, а также указатель на первый элемент в массиве. 
 * Проинициализируйте все элементы массива рандомными числами, используя указатель
 */


#include <iostream>
#define SIZE 5

using namespace std;

void main()
{
    int arr[SIZE];
    int* pArr = arr;

    for (int i = 0; i < SIZE; i++)
    {
        *(pArr + i) = rand() % 10;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << *(pArr + i) << " ";
    }
    
    pArr = nullptr;
}
