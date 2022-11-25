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
struct adress
{
	char town[20];
	char street[20];
	int house;
	int flat;
};
struct worker
{
	char fam[15];
	char name[20];
	int age;
	char gender[15];
	struct adress adr;
	char post[20];
};
int main()
{
	system("chcp 1251");
	system("cls");
	int i, count = 0, count_1 = 0, max_age = 0;
	char input_post[20];
	struct worker list[5] =
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
			cout << "Старший сотрудник: " << list[i].name << " " << list[i].fam << " " << list[i].age << endl;
		}

	}
	cout << "Введиите должность: " << endl;
	cin.getline(input_post, 20);
	for (i = 0; i < 5; i++)
	{
		if (strcmp(list[i].post, input_post) == 0)
		{
			count_1 += 1;
		}
	}
	cout << "Количество сотрудников занимающих должность, введённую пользователем с клавиатуры: " << count_1;


}