#include <iostream>

using namespace std;

int main()
{
	int leftInterval, rightInterval;
	cout << "Enter left interval: ";
	cin >> leftInterval;
	cout << "Enter right interval: ";
	cin >> rightInterval;
	int temp = 0;

	//задаємо вірний інтервал
	if (leftInterval > rightInterval)
	{
		cout << "left Interval > right Interval. We need to revers data" << endl;
		temp = leftInterval;
		leftInterval = rightInterval;
		rightInterval = temp;
	}
	cout << "We have next interval: " << leftInterval << "-" << rightInterval << endl;
	cout << "Simple digits: " << endl;
	for (int i = leftInterval; i <= rightInterval; ++i)
	{
		//якщо i не одиниця, і не ділиться на два та три, то воно просте, виводимо його
		if (i!=1 && i % 2 != 0 && i % 3 != 0)
			cout << i << endl;
		//якщо i дорівнює два або три воно також просте, виводимо його
		else if (i == 2 || i==3)
			cout << i << endl;
	}
	return 0;
}