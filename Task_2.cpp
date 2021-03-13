#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	//висота та кількість сугробчиків
	int height, countOfSygrobchick;

	//символ
	char symbol;
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter count Of Sygrobchick: ";
	cin >> countOfSygrobchick;
	cout << "Enter symbol: ";
	cin >> symbol;

	//розділювач
	char spaceSymbol = ' ';

	//середня висота для того, щоб потім малювати сугробчик у інший бік
	int averageHeight = height / 2;

	//малюємо кількість сугробчиків
	for (int i = 1; i <= countOfSygrobchick; ++i)
	{
		//малюємо висоту кожного сугробчику
		for (int m = 1, l=0, p=height; m <= height; ++m, ++l, --p)
			{
					//якщо ще не досягнуто середину сугробчика малюємо спочатку пропуски від нуля, для цього змінна l, що дорівнювала спочатку нулю і збільшувалася із ітерацією 
					if (m <= averageHeight)
					{
						for (int k = 0; k < l; ++k)
						{
							cout << spaceSymbol;
						}
					}
					//якщо досягнуто середину сугробчика малюємо пропуски до у порядку спадання, для цього була змінна p, що дорівнювала висоті і зменшувалася при кожній ітерації
					if (m > averageHeight)
					{
						for (int u = 1; u<p; ++u)
						{
							cout << spaceSymbol;
						}
					}
				//малюємо символ
				cout << symbol;
				cout << endl;
			}
		
	}

	return 0;
}