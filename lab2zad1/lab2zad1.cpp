#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "RUS");
	int number;
	std::cout << "Введите двузначное число";
	std::cin >> number;
	int n1 = number / 10;
	int n2 = number % 10;
	int square = number * number;
	int cube1 = n1 * n1 * n1;
	int cube2 = n2 * n2 * n2;
	int sume = 4 * (cube1 + cube2);
	if (square == sume) //пришлось гуглить if else
	{
		std::cout << "Ответ положительный" << std::endl; //снова не работает без std
	}
	else
	{
		std::cout << "Ответ отрицательный" << std::endl;
	}
	return 0;
}
