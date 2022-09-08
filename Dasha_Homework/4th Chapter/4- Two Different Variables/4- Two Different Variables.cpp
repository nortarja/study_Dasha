/*
 * Создайте 2 целочисленных переменных, первая переменная должна быть элоцирована статически, вторая динамически. 
 * Для статически элоцированной переменной создайте указатель. Для обеих переменных выведите в консоль их значения и адрес в памяти.
 */

#include <iostream>

using namespace std;

int main()
{
    int var1 = 10; 
    int* pVar2 = new int (20);

    int* pVar1 = &var1;

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << *pVar2 << endl; 

    cout << "var1 address = " << pVar1 << endl;
    cout << "var2 address = " << pVar2 << endl;

    delete pVar2;
}

