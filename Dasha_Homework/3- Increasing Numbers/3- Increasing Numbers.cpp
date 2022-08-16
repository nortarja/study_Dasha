/*
    Составить алгоритм увеличения всех трех, введённых с клавиатуры, переменных на 5, если среди них есть хотя бы две равные. 
    В противном случае выдать ответ «равных нет».
*/

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");

    int x1, x2, x3;
    const short parameter = 5;

    cout << "Введите число 1: " << endl; 
    cin >> x1;

    cout << "Введите число 2: " << endl;
    cin >> x2;

    cout << "Введите число 3: " << endl;
    cin >> x3;

    if (x1 == x2 || x2 == x3 || x1 == x3) 
    {
        x1 += parameter;
        x2 += parameter;
        x3 += parameter;

        cout << "\nЧисло 1 = " << x1 << "\nЧисло 2 = " << x2 << "\nЧисло 3 = " << x3;
    }
    else
    {
        cout << "Равных нет";
    }

    return 0;
}