/*
* �������� ����� Animal() � ��������� ������� Voice(), ������� ������� � ������� ������ � �������. 
* ������������ �� Animal ������� 3 ������ �������� (Cat, Dog, Cow) � ����������� ����� Voice ���,
* ����� ������ �������� �������� ���� ��������� � ������� ��� ������. 
* � ����� �������� ������ ���������� � ��������� ��� ��������� ��������� �����. 
* ����� �������� ������ �� ������� � �������� Voice � ������� �������.
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