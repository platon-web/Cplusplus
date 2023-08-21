#include <iostream>
using namespace std;
int main() 
{
	cout << "Home task #4.1.2\n\n";
	int number, c, c2, c3, c4, number1, n;
	cout << "Please, enter your 4-digit number:\n";
	cin >> number;
	if (number / 1000 < 1)
	{
		cout << "Your number includes less than 4 digits!\n";
			
	}
	else if (number / 1000 > 9)
	{
		cout << "Your number includes more than 4 digits!\n";
			
	}

	else
	{
		cout << "Your number includes exactly 4 digits!\n";
			
		c4 = number % 10;
		n = number / 10;
		c3 = n % 10;
		n = n / 10;
		c2 =n % 10;
		c = n/ 10;
		cout << "Your number in digits: \n";
		cout << c << " " << c2 << " " << c3 << " ";
		cout << c4 << " Let’s modify it. \n";
		number1 = c2 * 1000 + c * 100 + c4 *
			10 + c3;
		cout << "Your new number: " << number1;
	}

}

