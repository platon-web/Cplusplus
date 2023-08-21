#include <iostream>
using namespace std;
int main() {
	int number, i1, i2, i3, i4, i5, i6, i7;
	cout << "enter 1st number";
	cin >> i1;
	cout << "enter 2nd number";
	cin >> i2;
	cout << "enter 3d number";
	cin >> i3;
	cout << "enter 4th number";
	cin >> i4;
	cout << "enter 5thnumber";
	cin >> i5;
	cout << "enter 6th number";
	cin >> i6;
	cout << "enter 7th number";
	cin >> i7;
	if (i1 > i2) {
		number = i1;
	}
	else {
		number = i2;
	}
	if (i3 > number){
		number = i3;
	}
     if (i4 > number){
		number = i4;
	}
	 if (i5 > number){

		number = i5;
	}
	if (i6 > number){
		number = i6;
	}
	if (i7 > number){
		number = i7;
	}
	cout << "your max number: " << number;
}