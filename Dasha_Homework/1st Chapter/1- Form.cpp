
/*
    Написать программу «Анкета».
    Последовательно задаются вопросы (имя, фамилия, возраст, рост, вес).
    В результате вывести всю информацию в виде
Имя: Дмитрий
Фамилия: Малашин…
    */

#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    
    /* установка кодовой страницы win - cp1251 в потоки ввода и вывода
    (чтобы не было непонятных символов при выводе в консоли введённого с клавиатуры русского текста)
    */
    SetConsoleCP(1251); // ввод
    SetConsoleOutputCP(1251); // вывод

    cout << "Введите имя: " << endl;
    string name;
    cin >> name;

    cout << "Введите фамилию: " << endl;
    string surname;
    cin >> surname;

    cout << "Введите возраст: " << endl;
    unsigned short age;
    cin >> age;

    cout << "Введите рост: " << endl;
    float height;
    cin >> height;

    cout << "Введите вес: " << endl;
    float weight;
    cin >> weight;


    cout << "\n" << "Имя: " << name << "\n"
         << "Фамилия: " << surname << "\n"
         << "Возраст: " << age << "\n"
         << "Рост: " << height << "\n"
         << "Вес: " << weight << endl;

    return 0;
}


