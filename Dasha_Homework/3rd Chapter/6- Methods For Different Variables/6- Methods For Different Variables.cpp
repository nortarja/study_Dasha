/*
 * Создайте 3 переменных (int, double, string), проинциализируйте их, далее создайте 3 метода с одним названием "variableType", 
 * но каждый из них принимает разные типы данных (int, double, string). 
 * На выходе каждый метод должен выдавать сообщение по типу "число - это integer". 
 * Для каждой ранее созданной переменной вызовите метод "variableType"
 */

#include <iostream>
#include <string>

using namespace std;

void variableType(int var);
void variableType(double var);
void variableType(string var);

int main()
{
    int a = 10;
    double b = 20.03;
    string c = "3rd variable";

    variableType(a);
    variableType(b);
    variableType(c);
}

void variableType(int var)
{
    cout << var << " - is INTEGER" << endl;
}

void variableType(double var)
{
    cout << var << " - is DOUBLE" << endl;
}

void variableType(string var)
{
    cout << var << " - is STRING" << endl;
}


