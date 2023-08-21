#include <iostream>;
using namespace std;
int main() {
	int v;
	int t;
	int a;
	int s;
	cout << "input speed ";
	cin >> v;
	cout << "input time ";
	cin >> t;
	cout << "input acceleration ";
	cin >> a;
	s = v * t + (a * t * t) / 2;
	cout << "past location in a straight line uniformly accelerated motion = ";
	cout << s;
}