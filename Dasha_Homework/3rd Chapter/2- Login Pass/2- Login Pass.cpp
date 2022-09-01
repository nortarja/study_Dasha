/*
 * Реализовать метод проверки логина и пароля. На вход подается логин и пароль, на выходе истина, если прошел авторизацию, 
 * ложь, если нет. Логин: root, Password: Sperasoft. 
 * Используя этот метод, написать программу: пользователь вводит логин и пароль, 
 * программа пропускает его дальше или нет, выводя соответственные сообщения. 
 * Ограничить ввод пароля тремя попытками.
*/

#include <iostream>
#include <string>

using namespace std;

bool checkLoginPass(string LOGIN, string PASS);

bool isCredentialsCorrect = false;

void main()
{    
    string enteredLogin = "";
    string enteredPass = "";

    const int maxAttempts = 3;
    int attemptCounter = 0;
    
    while (attemptCounter < maxAttempts)
    {
        cout << "Enter login: ";
        cin >> enteredLogin;

        cout << "\nEnter pass: ";
        cin >> enteredPass;

        checkLoginPass(enteredLogin, enteredPass);

        if (isCredentialsCorrect == false)
        {
            attemptCounter++;
            cout << "You entered wrong login or password." << endl;
            cout << "You have " << maxAttempts - attemptCounter << " attempts remained." << endl << endl;
        }
        else
        {
            cout << "You entered right credentials." << endl;
            break;
        }
    }
    
    if (isCredentialsCorrect == false)
    {
        cout << "You have no more attempts left. Authorizaton denied." << endl;
    }

}

bool checkLoginPass(string LOGIN, string PASS)
{
    string rightLogin = "root";
    string rightPass = "Sperasoft";
    
    isCredentialsCorrect = (LOGIN == rightLogin && PASS == rightPass) ? true : false;
    return isCredentialsCorrect;
}

