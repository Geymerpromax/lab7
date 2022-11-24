//Создать массив из 5 элементов следующей структуры: фамилия, возраст, адрес (улица, номер дома, номер квартиры), должность.
//Вывести на экран список молодежи не старше 20 лет с указанием места работы,
//затем отдельно вывести  список работников с фамилией Иванов с указанием адреса
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
	char street[20];
	int house;
	int flat;
};
struct man
{
	char fam[15];
	int old;
	struct adress adr;
	char work[15];
};
int main()
{
	system("chcp 1251");
	system("cls");
	int i, k = 0;
	struct man list[5] =
	{
	"Иванов" ,24 ,"Мира", 12, 33, "вахтёр",
	"Петров", 18, "Ленина", 44, 1, "менеджер",
	"Сидоров", 45, "Мазая", 65, 32, "директор",
	"Анохина", 19, "Фрунзе", 13, 46, "бухгалтер",
	"Усова", 30, "Фучика", 33, 22, "кассир"
	};
	cout << "Список сотрудников: " << endl;
	for (i = 0; i < 5; i++)
	{
		cout << list[i].fam << list[i].old << list[i].adr.street << list[i].adr.house << list[i].adr.flat << list[i].work << endl;
	}
	cout << "Молодёжь: " << endl;
	for (i = 0; i < 5; i++)
	{
		if (list[i].old <= 20)
		{
			k++;
			cout << list[i].fam << list[i].old << list[i].work << endl;
		}
	}
	if (k == 0)
	{
		cout << "Данных не найдено" << endl;
	}
	cout << "Список ивановых: " << endl;
	k = 0;
	for (i = 0; i < 5; i++)
	{
		if (strcmp(list[i].fam, "Иванов") == 0)
		{
			k++;
			cout << list[i].fam << list[i].adr.street << list[i].adr.house << list[i].adr.flat << endl;
		}
	}
	if (k == 0)
	{
		cout << "Данных не найдено";
	}

}