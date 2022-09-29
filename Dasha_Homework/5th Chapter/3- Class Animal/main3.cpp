/*
* Создайте класс Animal() с публичным методом Voice(), который выводит в консоль строку с тесктом. 
* Отнаследуйте от Animal минимум 3 класса животных (Cat, Dog, Cow) и перегрузите метод Voice так,
* чтобы каждое животное выводило свою сообщение в консоль при вызове. 
* В мейне создайте массив указателей и заполните его объектами созданных типов. 
* Затем пройдите циклом по массиву и вызовите Voice у каждого объекта.
*/

#include "Animal.h"
#include <iostream>
#include <string>

int main()
{
    Cat Knopa;
    Cat Khlopa;
    Dog Sharik;
    Cow Burenka;

    const int SIZE = 4;

    Animal* Aptr[SIZE]{&Knopa, &Sharik, &Khlopa, &Burenka};

    for (int i = 0; i < SIZE; i++)
    {
        Aptr[i]->Voice();
    }

    return 0;
}