/*
    Написать программу обмена значениями двух целочисленных переменных: 
а) С использованием третьей переменной
б) С использованием двух переменных

*/

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");

    int var1, var2;

    cout << "Введите число 1: " << endl; 
    cin >> var1;

    cout << "Введите число 2: " << endl;
    cin >> var2;

    /* 
    === Вариант с использованием третьей переменной ===

    int extraVar;
    extraVar = var1;
    var1 = var2;
    var2 = extraVar;

    */

    // === Вариант с использованием только двух переменных ===
    var1 = var1 + var2; 
    var2 = var1 - var2; 
    var1 = var1 - var2; 


    cout << "\nЧисло 1: " << var1 << endl;
    cout << "Число 2: " << var2 << endl;

    return 0;
}