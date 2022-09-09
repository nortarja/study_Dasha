/*
 * Объявите указатель на массив типа double и предложите пользователю выбрать его размер. 
 * Далее напишите четыре функции: первая должна выделить память для массива, вторая  – заполнить ячейки данными, 
 * третья – показать данные на экран, четвертая – освободить занимаемую память.  
 * Программа должна предлагать пользователю продолжать работу (создавать новые динамические массивы) или выйти из программы.
 */
#include <iostream>

using namespace std;

double* AddMemoryForArray(double *&arr, const int size);
void FillArray(double* const arr, const int size);
void ShowArray(const double* const arr, const int size);
void DeleteArrayMemory(double *&arr);

void main()
{ 
    int size = 0;
    double* arr = nullptr;
    char choiceVar = 'Y';

    while(choiceVar == 'Y' || choiceVar == 'y')
    {   
        cout << "Enter the number of elements in Array: ";
        cin >> size;

        if (size <= 0)
        {
            cout << "\nNumber of elements should be positive number" << endl; 
        }
        else
        {
            AddMemoryForArray(arr, size);
            FillArray(arr, size);
            ShowArray(arr, size);
        }

        cout << "\nDo you want to enter new Array size? [Y/N]" << endl;
        cin >> choiceVar;
    }

}

double* AddMemoryForArray(double *&arr, const int size)
{
    arr = new double[size];
    return arr;
}

void FillArray(double* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = static_cast<double>(rand() % 20)/100;
    }
}

void ShowArray(const double* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void DeleteArrayMemory(double *&arr)
{
    delete[] arr;
    arr = nullptr;
}