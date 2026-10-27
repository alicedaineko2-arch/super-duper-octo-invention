#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double D, M;
	cout << "Введите ДЕНЬ рождения";
	cin >> D;
	cout << "Введите МЕСЯЦ рождения";
	cin >> M;
	string kozinak = " "; //я не верю в астрологию, поэтому козинак (я не ем козинак)
	if ((M == 12 && D >= 22) || (M == 1 && D <= 19))
	{
		kozinak = "Козерог";
	}
	 else if ((M == 1 && D >= 20) || (M == 2 && D <= 18))
	{
		kozinak = "Водолей";
	}
	 else if ((M == 2 && D >= 19) || (M == 3 && D <= 20))
	{
		kozinak = "Рыбы";
	}
	 else if ((M == 3 && D >= 20) || (M == 4 && D <= 19))
	{
		kozinak = "Овен";
	}
	 else if ((M == 4 && D >= 20) || (M == 5 && D <= 20))
	{
		kozinak = "Телец";
	}
	else if ((M == 5 && D >= 21) || (M == 6 && D <= 21))
	{
		kozinak = "Близнецы";
	}
	 else if ((M == 6 && D >= 22) || (M == 7 && D <= 22))
	{
		kozinak = "Рак";
	}
	 else if ((M == 7 && D >= 23) || (M == 8 && D <= 22))
	{
		kozinak = "Лев";
	}
	else if ((M == 8 && D >= 23) || (M == 9 && D <= 22))
	{
		kozinak = "Дева";
	}
	else if ((M == 9 && D >= 23) || (M == 10 && D <= 22))
	{
		kozinak = "Весы";
	}
	 else if ((M == 10 && D >= 23) || (M == 11 && D <= 22))
	{
		kozinak = "Скорпион"; //для проверки я использовала свою др - 03.11 
	}
	else if ((M == 11 && D >= 23) || (M == 12 && D <= 21))
	{
		kozinak = "Стрелец";
	}
    if (kozinak != " ")
	{
		cout << "Вы - " << kozinak << endl;
	}
	else {
		cout << "Неккоректная дата" << endl;
	}
	return 0;
}