/*
Составить программу, которая в зависимости от
порядкового номера дня недели (1, 2, …, 7) выводит на экран его название (понедельник, вторник, …, воскресенье)
*/


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int dayNumber = 0;
    string week[] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье" };
    
    cout << "Введите номер дня недели: " << endl;
    cin >> dayNumber;

    if (dayNumber > 0 && dayNumber <= (sizeof(week) / sizeof(week[0])))
    {
        cout << "День недели: " << week[dayNumber - 1] << endl;
    }
    else
    {
        cout << "Вы ввели неправильное число" << endl;
    }
    
    return 0;
    
}