#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double m1, m2, m3;
	cout << "Введите рост через пробел";
	cin >> m1 >> m2 >> m3;
	if (m1 > m2 || m2 > m3)
	{
		cout << "Рост разный! 1>2 или 2>3";
	}
	else if (m1 > m3)
	{
		cout << "Рост разный! 1>3";
	}
	else (m1 = m2 = m3);
	{
		cout << "Рост одинаковый"; //тоже присутствует баг
	}
	return 0;
}
