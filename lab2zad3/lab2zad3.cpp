#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c;
	cout << "Введите значение a, b, c";
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "Треугольника с такими стронами не существует!!!!" << endl; //тут можно любые числа,например, 1 2 5
	}
	else if (a == b || b == c || a == c)
	{
		cout << "Треугольник равнобедренный" << endl; //тут можно, например, 5 5 3
	}
	else
	{
		cout << "Треугольник существует, но не является равнобедренным" << endl; //прямоугольный треугольник
	}
	return 0;
}