#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c;
	cout << "Введите a, b, c";
	cin >> a >> b >> c;
	if (a > b || b > c)
	{
		cout << "Неравентсво не выполняется! a > b или b > c";
	}
	else  if (a > c)
	{
		cout << "Неравентво не выполнятеся!! a > c";
	}
	else (a < b && b < c && a < c);
	cout << "Неравенство выполняется:)"; //код программы содержит баг, при котором эта фраза выводится всегда
	return 0;
}