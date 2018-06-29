// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "1.	Напишите программу, которая вычисляет сумму целых чисел от а до 500 (значение a вводится с клавиатуры).\n";

	int a, sum=0;

	cout << "a = ";
	cin >> a;

	for (int i = a; i <= 500; i++)
	{
		sum += i;
	}

	cout << "sum = " << sum << endl;

	cout << "2.	Напишите программу, которая запрашивает два целых числа x и y, после чего вычисляет и выводит значение x в степени y.\n";

	int x, y, res=1;

	cout << "x = ";
	cin >>  x;
	cout << "Степень = ";
	cin >> y;

	for (int i = 1; i <= y; i++)
	{
		res *= x;

	}
	cout << "x^" << y << " = " << res << endl;

	cout << "3.	Найти среднее арифметическое всех целых чисел от 1 до 1000.\n";

	int sr=0;

	for (int i = 1; i <= 1000; i++)
	{
		sr += i;
		if (i == 1000) {
			
			cout << sr/i << endl;
			break;
		}
	}

	cout << "4.	Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры: 1  a  20).\n";

	start:
	cout << "a = ";
	cin >> a;

	if (a > 0) {
		unsigned long long int res1 = 1;

		for (int i = a; i <= 20; ++i)
		{
			res1 *= i;

		}
		cout << res1 << endl;
	}
	else goto start;

	cout << "5.	Написать программу, которая выводит на экран таблицу умножения на k, где k – номер варианта. Например, для 7-го варианта: \n7 x 2 = 14\n7 x 3 = 21\n\n";

	int k;

	cout << "k = ";
	cin >> k;

	cout << endl;

	for (int i = 1; i <= 9; i++)
	{
		cout << k << " * " << i << " = " << k*i << endl;
	}

    return 0;
}

