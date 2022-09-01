/*
 * Создать рекурсивный метод, который выводит на экран числа от a до b (a < b)
 */

#include <iostream>

using namespace std;

int recursion(int a, int b);

void main()
{
    int firstNumber = 0;
    int lastNumber = 0;
    
    cout << "Enter 1st number: ";
    cin >> firstNumber;

    cout << "\nEnter last number: ";
    cin >> lastNumber;

    if (firstNumber < lastNumber)
    {
        recursion(firstNumber, lastNumber);
    }
    else
    {
        cout << "You entered wrong numbers. 1st number should be smaller than the last one." << endl;
    }

}

int recursion(int a, int b)
{
    if (a == b)
    {
        return 0;
    }

    cout << a << " ";
    a++;
    
    return recursion(a, b);
}


