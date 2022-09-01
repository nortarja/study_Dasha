/*
 * Создайте строку string любого размера не меньше 3 сиволов и создайте метод, который принимает строку и 1 символ, 
 * на выходе метод должен выдавать сколько раз символ встречается в строке.
 */

#include <iostream>
#include <string>

using namespace std;

string name = "My name is Daria Kuzmina";
string letter = "";

void letterSearch(string a, string b);

void main()
{
    cout << name << endl; 
    cout << "Enter the symbol you want to search in this string: ";
    cin >> letter; 

    letterSearch(name, letter);
}

void letterSearch(string a, string b)
{
    int letterCounter = 0;
    int letterIndex = 0;

    while ((letterIndex = a.find(b, letterIndex)) != string::npos)
    {
        letterCounter++;
        letterIndex++;
    }
       
    if (letterCounter == 0)
    {
        cout << "There is no such letter in this string" << endl;
    }
    else
    {
        cout << "There is " << letterCounter << " letters in this string." << endl;
    }
}



