#include <iostream>;
using namespace std;
int main() {
	int d;
	int s;
	double pi;
	int p;
	pi = 3, 14;
	double r;
	cout << "input diameter circle";
	cin >> d;
	
	r = d/2;
	cout << "area of circle was";
	s = pi * r * r;
	cout << s;
	cout << "\nperumeter of circle was";
	p = 2 * pi * r;
	cout << p;
}