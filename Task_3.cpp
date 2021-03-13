#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	int height;
	char symbol;

	//висоту задаємо від 3 до 66
	cout << "Enter height [3-66]: ";
	cin >> height;

	//якщо висоту вказано не вірно, просимо ввести ще раз
	while (height >= 66 && height<=2)
	{
		cout << "Error height!!" << endl;
		cout << "Enter again: ";
		cin >> height;
	}
	cout << "Enter symbol: ";
	cin >> symbol;

	char spaceSymbol = ' ';

	//середня висота фігури, для того, щоб малювати фігури С-E
	int averageHeight = height / 2;

	//перша фігура
	cout << "Figure A:\n";
	for (int ryadok = height, propusk = 0; ryadok > 0; --ryadok, ++propusk)
	{
		//малюємо пропуски
		for (int s = 0; s < propusk; s++)
		{
			cout << spaceSymbol;
		}

		//малюємо символ, кожного циклу менше на одиницю
		for (int colonka = ryadok; colonka > 0; --colonka)
		{
			cout << symbol;

		}
		cout << endl;
	}
	cout << endl;

	//друга фігура
	cout << "Figure B:\n";
	for (int ryadok = 1; ryadok <= height; ++ryadok)
	{
		//малюємо рядок, із одного символу кожного разу збільшуючи його
		for (int colonka = 1; colonka <= ryadok; colonka++)
		{
			cout << symbol;
		}
		cout << endl;
	}
	cout << endl;

	//третя фігура
	cout << "Figure C:\n";
	for (int i = 1, m = 1, p = height, s = height; i <= height; ++i, ++m, --p, s -= 2)
	{
		//виводимо символи, доки не досягнемо середньої висоти +1
		if (m < averageHeight + 1)
		{
			//малюємо пропуск, починаючи із нуля і зібльшуючи після кожної ітерації
			for (int k = 1; k < m; ++k)
			{
				cout << spaceSymbol;
			}
			//малюємо символ, починаючи із висоти, але кожногоразу зменуючи на два
			for (int j = s; j > 0; --j)
			{
				cout << symbol;
			}
			cout << endl;
		}
		//якщо досягли середини висоти +1, то просто пропуски
		if (m >= averageHeight + 1)
		{
			cout << endl;
		}
	}
	cout << endl;

	//четверта фігура
	cout << "Figure D:\n";
	for (int i = 1, m = 1, p = height, s = height; i <= height; ++i, ++m, --p, s -= 2)
	{
		//до середини висоти фігури виводимо пропуски
		if (m < averageHeight + 1)
		{
			cout << endl;
		}
		//після середини
		if (m >= averageHeight + 1)
		{
			//виводимо пропуски, починаючи від середини висоти і зменшуємо до нуля
			for (int u = 1; u < p; ++u)
			{
				cout << spaceSymbol;
			}

			//виводимо символ, починаючи із одного і доки не досягнемо висоти
			for (int t = p; t <= m; ++t)
			{
				cout << symbol;
			}
			cout << endl;
		}
	}
	cout << endl;

	//п'ята фігура
	cout << "Figure E:\n";
	for (int i = 1, m = 1, p = height, s=height; i <= height; ++i, ++m, --p, s-=2)
	{
		//до середини
		if (m < averageHeight+1)
		{
			//малюємо пропуск від одного до середини
			for (int k = 1; k < m; ++k)
			{
				cout << spaceSymbol;
			}
			//малюємо символ від висоти до одиниці
			for (int j = s; j >0; --j)
			{
				cout << symbol;
			}
		}
		//після середини
		if (m >= averageHeight+1)
		{
			//малюємо символ від середини др нуля
			for (int u = 1; u < p; ++u)
			{
				cout << spaceSymbol;
			}

			//малюємо символ від одиниці до висоти
			for (int t = p; t <= m; ++t)
			{
				cout << symbol;
			}
		}
		cout << endl;
	}
	return 0;
}