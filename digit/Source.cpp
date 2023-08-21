#include <iostream>
using namespace std;


int main()
{
	int number, p, p1, p2, p3, p4, p5, p6, p7, p8;
	cout << "Please, enter your 6-digit number: ";
	cin >> number;
	if (number / 100000 < 1)
	{
		cout << "Your number includes less than "
			"6 digits!\n";
	}
	else if (number / 100000 > 9)
	{
		cout << "Your number includes more than "
			"6 digits!\n";
	}
	else
	{
		cout << "Your number includes exactly "
			"6 digits!\n";
		p5 = number % 10;
		p8 = number / 10;
		p4 = p8 % 10;
		p8 = p8 / 10;
		p3 = p8 % 10;
		p8 = p8 / 10;
		p2 = p8 % 10;
		p8 = p8 / 10;
		p1 = p8 % 10;
		p = p8 / 10;


		cout << p << " " << p1 << " " << p2 << " ";
		cout << p3 << " " << p4 << " " << p5 << " ";
		p6 = p + p1 + p2;
		p7 = p3 + p4 + p5;
		if (p6 == p7)
		{
			cout << "Your number brings you good luck!";
		}
		else
		{
			cout << "It is a pity!";
		}
	}

}