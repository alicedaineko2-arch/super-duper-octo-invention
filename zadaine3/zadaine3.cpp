#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "RUS");
	double x = 0.12;
	double y = -8.75;
	double z = sqrt(abs(x * sin(y))); //пришлось поставить модуль т.к выдавет "не число"
	double b = y + (x * atan(z)) / (y + pow(x, 2)); 
	std::cout << "Вычисления для варианты 6 лаб.работы:" << std::endl;//почему-то не работает без std
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "z = " << z << std::endl;
	std::cout << "b = " << b << std::endl;
	return 0;
}