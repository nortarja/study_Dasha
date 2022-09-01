/*
 * Создайте перечисление со следующими перечислителями (enum): chicken, lion, giraffe, elephant, duck и snake. 
 * Объявите массив, где элементами будут эти перечислители и, используя список инициализаторов, 
 * инициализируйте каждый элемент соответствующим количеством лап определенного животного. 
 * В функции main() выведите количество ног у слона, используя перечислитель.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void main()
{
	enum Animals { Chicken = 2, Lion = 4, Giraffe = 4, Elephant = 4, Duck = 2, Snake = 0 };

	cout << "Number of Elephant's legs is: " << Animals::Elephant << endl;

}



