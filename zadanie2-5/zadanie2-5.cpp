#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	double m;
	double kg;
	cout << "Введите номер (1 - кг, 2 - милиграмм, 3 - грамм, 4 - тонна, 5 - центнер)";
	cin >> n;
	cout << "Введите массу";
	cin >> m;
	if (n == 1)
	{
		kg = m;
	}
	else if (n == 2)
	{
		kg = m / 1000000;
	}
	else if (n == 3)
	{
		kg = m / 1000;
	}
	else if (n == 4)
	{
		kg = m * 1000;
	}
	else if (n == 5)
	{
		kg = m * 100;
	}
	else
	{
		cout << "Неверное значение" << endl;
		return 0;
	}
	cout << "Значение в килограммах" << kg << endl;
	return 0;
}