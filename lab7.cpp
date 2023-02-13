//
#include <cstdio>
#include <cmath>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <random>
#include <time.h>
#include <cstring>
#include <iomanip>
using namespace std;
class adress
{
public:
	string town;
	string street;
	int house;
	int flat;
};
class worker
{
public:
	string fam;
	string name;
	int age;
	string gender;
	class adress adr;
	string post;
};
int main()
{
	system("chcp 1251");
	system("cls");
	int i, count = 0, count_1 = 0, max_age = 0;

	string input_post;

	worker list[5] =
	{
	"Иван", "Иванов", 24, "мужчина", "Орск", "ленина",  12, 33, "Уборщик",
	"Абдула", "Епифанцев", 15, "мужчина", "Орск", "ленина",  12, 33, "Директор",
	"Мария", "Петрова", 21, "женщина", "Орск", "ленина",  12, 33, "Секретарша",
	"Михаил", "Круг", 95, "мужчина", "Орск", "ленина",  12, 33, "Продюссер",
	"Пётр", "Ишмурзин", 14, "мужчина", "Орск", "ленина",  12, 33, "Уборщик",
	};

	cout << "Список сотрудников: " << endl;

	for (i = 0; i < 5; i++)
	{
		cout << list[i].name << " " << list[i].fam << " " << list[i].age << " " << list[i].gender << " " << list[i].adr.town << " " << list[i].adr.street << " " << list[i].adr.house << " " << list[i].adr.flat << " " << list[i].post << endl;
		count += list[i].age;
		if (list[i].age > max_age)
		{
			max_age = list[i].age;
		}
	}
	count = count / i;
	cout << "Средний возраст: " << count << endl;
	for (i = 0; i < 5; i++)
	{
		if (max_age == list[i].age)
		{
			cout << "Старший сотрудник: " << list[i].name << " " << list[i].fam  << endl;
		}

	}
	cout << "Введиите должность: " << endl;
	cin >> input_post;
	for (i = 0; i < 5; i++)
	{
		if (list[i].post == input_post)
		{
			count_1 += 1;
		}
	}
	cout << "Количество сотрудников занимающих должность, введённую пользователем с клавиатуры: " << count_1;
	

}