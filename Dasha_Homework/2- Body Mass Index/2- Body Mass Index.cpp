/*
    Ввести вес и рост человека. Рассчитать и вывести индекс массы тела I = m / ( h * h ), где m – масса тела в кг, h – рост в метрах.
*/

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    
    float weight, height, result;

    cout << "Введите массу тела в КГ: " << endl; 
    cin >> weight;

    cout << "Введите рост в М: " << endl;
    cin >> height; 

    result = weight / (height * height);

    cout << "\nИндекс массы тела равен = " << result;

    return 0;

}