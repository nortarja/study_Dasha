/*
 * Создайте функцию swap(), которая на вход получает 2 числа и меняет их значения местами. 
 * Числа должны передаваться по указателю
*/

#include <iostream>

using namespace std;

void Swap(int* a, int* b);

int main()
{
    cout << "Enter two numbers: ";
    int var1 = 0;
    int var2 = 0;
    cin >> var1 >> var2;

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    Swap(&var1, &var2);

    cout << "========================" << endl;

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

}

void Swap(int* a, int* b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
