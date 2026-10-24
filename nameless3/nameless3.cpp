#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double x, y, a, b;
	cout << "Введите число а";
	cin >> a;
	cout << "Введите число b";
	cin >> b;
	cout << "Введите координату х";
	cin >> x;
	cout << "Введите координату y";
	cin >> y;
	if ((x * x + y * y <= b * b) && (abs(x) >= a))
	{
		cout << "Точка принадлежит заштрихованной области" << endl; //для проверки подойдет a = 2, b = 5, x = -3 y = 2
	}
	else
	{
		cout << "Точка не принадлежит заштрихованной области" << endl; // a = 2, b = 5, x = 6, y = 6 (за кругом)
	} // a = 2, b = 5, x = 1, y = 1 (в полосе)
	return 0;
}
