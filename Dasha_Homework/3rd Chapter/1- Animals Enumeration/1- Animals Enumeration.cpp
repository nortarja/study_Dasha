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
	enum class Animals { 
		Chicken = 0, 
		Lion, 
		Giraffe, 
		Elephant, 
		Duck, 
		Snake, 
		COUNT
	};

	
	const int SIZE = static_cast<int>(Animals::COUNT);
	int arr[SIZE] = {2, 4, 4, 4, 2, 0};

	int indexElephant = static_cast<int>(Animals::Elephant);
		
	cout << "Number of Elephant's legs is: " << arr[indexElephant] << endl;

}



