/*
 * Создать подобные методы для вычитания, умножения и деления, а также создать метод "ChooseOperation", 
 * который принимает на вход enum OperatorType, который вам необходимо создать. Он должен состоять из 4-х операций, 
 * методы для которых были уже созданы. 
 * При вызове ChooseOperation пользователь должен ввести номер операции, после чего соответсвенный метод будет выполнен.
 */

#include <iostream>

using namespace std;

enum OperatorType { Addition = 1, Subtraction, Multiplication, Division };
void ChooseOperation(enum OperatorType);

int firstNumber = 0;
int secondNumber = 0;
int operationNumber = 0;

void main()
{
    cout << "Enter 1st number: ";
    cin >> firstNumber;

    cout << "\nEnter 2nd number: ";
    cin >> secondNumber;

    cout << "\n____________________" << endl << endl;

    /* 
    Тут просто так подала на вход рандомный элемент перечисления, чтобы функция просто вызвалась.
    Не уверена, что это правильно, но иначе не смогла вызвать функцию.
    */
    ChooseOperation(Addition);
}

void addition(int a, int b)
{
    cout << "Sum of these numbers is = " << a + b << endl;
}

void subtraction(int a, int b)
{
    cout << "The result of subtracting these numbers is = " << a - b << endl;
}

void multiplication(int a, int b)
{
    cout << "The result of multiplying these numbers is = " << a * b << endl;
}

void division(int a, int b)
{
    if (b == 0)
    {
        cout << "You can't divide by zero!" << endl;
    }
    else
    {
        cout << "The result of dividing these numbers is = " << a / b << endl;
    }
}

void ChooseOperation(enum OperatorType)
{
    
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter operation number: ";
    cin >> operationNumber;

    cout << "\n____________________" << endl << endl;
    
    switch (operationNumber)
    {
        case Addition:
        {   
            addition(firstNumber, secondNumber);
            break;
        }

        case Subtraction:
        {
            subtraction(firstNumber, secondNumber);
            break;
        }

        case Multiplication:
        {
            multiplication(firstNumber, secondNumber);
            break;
        }

        case Division:
        {
            division(firstNumber, secondNumber);
            break;
        }

        default:
        {
            cout << "You have entered the number of a non-existent operation." << endl;
            break;
        }
    }
    

}