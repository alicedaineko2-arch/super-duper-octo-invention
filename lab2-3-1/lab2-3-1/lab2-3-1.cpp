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
		cout << "Неравентсво не выполняется! a > b или b > c" << endl;
	}
	else  if (a > c)
	{
		cout << "Неравентво не выполнятеся!! a > c" << endl;
	}
	else (a < b && b < c && a < c);
	cout << "Неравенство выполняется:)" << endl; 
	return 0;
}