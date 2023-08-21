#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Enter the distance between points A and B in km ";
	cin >> a;
	cout << "Enter the distance between points B and C in km ";
	cin >> b;
	cout << "Enter the weight of the load in kg: ";
	cin >> c;

	if (c < 500)
	{
		cout << " Between points A and B will be spent " << a * 1 << " liters.\n";

		if ((300 - a * 1) >= 0)
		{
			cout << " Need to refuel " << 300 - a * 1 << " liters.\n";
		}
		else
		{
			cout << "Unable to fly on the entered route ";
		}
	}
	else if (c < 1000)
	{
		cout << " Between points A and B will be spent " << a * 4 << "liters.\n";
		if ((300 - a * 4) >= 0)
		{
			cout << " Need to refuel " << 300 - a * 4 << "liters.\n";
		}

		else
		{
			cout << " Unable to fly on the entered route ";
		}
	}
	else if (c < 1500)
	{
		cout << " Between points A and B will be spent " << a * 7 << " liters.\n";
		if ((300 - a * 7) >= 0)
		{
			cout << " Need to refuel " << 300 - a * 7 << " liters.\n";
		}

		else
		{
			cout << "Unable to fly on the entered route ";
		}
	}
	else if (c < 2000)
	{
		cout << "Between points A and B will be spent " << a * 9 << " liters.\n";
		if ((300 - a * 9) >= 0)
		{
			cout << " Need to refuel " << 300 - a * 9 << " liters.\n";
		}

		else
		{
			cout << " Unable to fly on the entered route ";
		}

	}
	else if (c > 2000)
	{
		cout << " Unable to fly on the entered route " << endl;
	}

	if (c < 500)
	{
		cout << " Between points B and C will be spent " << b * 1 << " liters.\n";
		if ((300 - b * 1) >= 0)
		{
		}

		else
		{
			cout << " Unable to fly on the entered route ";
		}
	}
	else if (c < 1000)
	{
		cout << "Between points B and C will be spent" << b * 4 << "liters.\n";
		if ((300 - b * 4) >= 0) {}

		else
		{
			cout << " Unable to fly on the entered route ";
		}
	}
	else if (c < 1500)
	{
		cout << " Between points B and C will be spent " << b * 7 << "liters.\n";
		if ((300 - b * 7) >= 0) {}

		else
		{
			cout << " Unable to fly on the entered route ";
		}
	}
	else if (c < 2000)
	{
		cout << " Between points B and C will be spent" << b * 9 << " liters.\n";
		if ((300 - b * 9) >= 0) {}

		else
		{
			cout << " Unable to fly on the entered route ";
		}
	}
}