/*
* Напишите программу, которая проверяет правильность ввода PIN кода. 
* Используя цикл while, проверяйте правильность введенного пина, если пин введен не верно, программа заново требует ввод данных. 
* После 5 не верных вводов пин кода программа заканчивает работу.
*/


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    
    const int PIN = 1234;
    const int maxAttempt = 5;
    int currentAttempt = 1;
    int input = 0;

    while (currentAttempt <= maxAttempt)
    {
        cout << "\nВведите пин-код: " << endl;
        cin >> input;

        if (input != PIN)
        {
            cout << "Вы ввели неправильный пин-код. У вас осталось " << maxAttempt - currentAttempt << " попыток." << endl;
            currentAttempt++;
            continue;
        }
        else
        {
            cout << "Пин-код правильный." << endl; 
            break;
        }
    }
    
    return 0;
}

