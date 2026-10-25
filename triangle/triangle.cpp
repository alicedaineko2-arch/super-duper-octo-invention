#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c;
	cout << "Дан интервал (1.6 - 3.8)";
	cout << "Введите a b c";
	cin >> a >> b >> c;
	cout << "Числа из интервала:" << endl;
	if (a > 1.6 && a < 3.8)
	{
		cout << a << " ";
	}
	if (b > 1.6 && b < 3.8)
	{
		cout << b << " ";
	}
	if (c > 1.6 && c < 3.8)
	{
		cout << c << " ";
	}
	cout << endl;
	return 0;
}
