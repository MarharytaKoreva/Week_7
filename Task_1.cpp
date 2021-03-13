#include <iostream>

using namespace std;

int main()
{
	//вводимо рік та день, із якого розпочинається рік
	int year, startDay;
	cout << "Input year: ";
	cin >> year;
	cout << "Input day which starts a year: ";
	cin >> startDay;

	cout << "Calendar for " << year << " year!" << endl;
	//виводимо повідомлення про високосний рік
	if (year % 4 == 0)
		cout << "We have a leap year!" << endl;
	cout << endl;

	//змінна для кількості дня у кожному місяці
	int daysInCurrentMonth = 0;

	//для пропусків, залежно від дня, із якого починається місяць
	char spaceSymbol = ' ';

	//цикл для кожного місяця
	for (int i = 1; i <= 12; ++i)
	{
		//проходимося по i
		switch (i)
		{
			//місяці із 31 днем
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				//змінюємо кількість днів у місяці відповідно до номеру місяця
				daysInCurrentMonth = 31;
				//виводимо назву місяця
				if (i == 1)
					cout << "\tJanuary" << endl;
				else if (i == 3)
					cout << "\tMarch" << endl;
				else if (i == 5)
					cout << "\tMay" << endl;
				else if (i == 7)
					cout << "\tJuly" << endl;
				else if (i == 8)
					cout << "\tAugust" << endl;
				else if (i == 10)
					cout << "\tOctober" << endl;
				else if (i == 12)
					cout << "\tDecember" << endl;
				break;
			//місяці із 30 днями
			case 4:
			case 6:
			case 9:
			case 11:
				//змінюємо кількість днів у місяці відповідно до номеру місяця
				daysInCurrentMonth = 30;
				//виводимо назву місяця
				if (i == 4)
					cout << "\tApril" << endl;
				else if (i == 6)
					cout << "\tJune" << endl;
				else if (i == 9)
					cout << "\tSeptember" << endl;
				else if (i == 11)
					cout << "\tNovember" << endl;
				break;
			//лютий, залежно від високосу
			case 2:
				//змінюємо кількість днів у місяці відповідно до номеру місяця
				//якщо високосний
				if (year % 4 == 0)
					daysInCurrentMonth = 29;
				//якщо невисокосний
				else
					daysInCurrentMonth = 28;
				//виводимо назву місяця
				cout << "\tFebruary" << endl;
				break;
		}
		//назви днів тижня
		cout << "Mo\tTu\tWe\tTh\tFr\tSa\tSu" << endl;

		//кількість порожніх клітинок
		int emptyValue = 0;

		//малюємо пропуски, залежно від того, коли розпочинається місяць
		for (int j = 1; j < startDay; ++j)
		{
			cout << spaceSymbol << "\t";
			++emptyValue;
		}

		//count для кількості днів у тижні (для початку прирівнюємо його до кількості пропусків)
		int count = emptyValue;

		//змінна для того, щоб змінити початок наступного місяця, залежно від того, коли закінчився попередній мвсяць
		int tempForStartDay = 0;

		//виводимо календар
		for (int k = 1; k <= daysInCurrentMonth; ++k)
		{
			//додаємо до змінної одиничку
			++tempForStartDay;

			//для кількості днів у тижні додаємо одиничку
			++count;

			//виводимо число
			cout << k << "\t";

			//якщо кількість днів у тижні зрівнялося із 7
			if (count % 7 == 0)
			{
				//переходимо на новий рядок
				cout << endl;
				//оновлюємо змінну для наступного місяця
				tempForStartDay = 1;
			}
		}
		//прирівнюємо день із якого починається новий місяць, до змінної, яку ми тимчасово ввели для обрахунку, коли закінчився попередній місяць
		startDay = tempForStartDay;
		cout << endl << endl;

	}
	return 0;
}