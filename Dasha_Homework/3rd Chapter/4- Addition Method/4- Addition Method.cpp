/*
* Создать метод "addition", который при вызове запрашивает у пользователя 2 числа, складывает их и выводит в консоль результат.
*/

#include <iostream>

using namespace std;

void addition();

void main()
{
    addition();
}

void addition()
{
    int numberOne = 0;
    int numberTwo = 0;

    cout << "Enter 1st number: ";
    cin >> numberOne;

    cout << "\nEnter 2nd number: ";
    cin >> numberTwo;
    
    cout << "\nSum of these numbers is = " << numberOne + numberTwo << endl;
}
