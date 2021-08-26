#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cout << "Please enter first number: ";
	cin >> a;
	cout << "Please enter second number: ";
	cin >> b;
	cout << "Please enter third number: ";
	cin >> c;
	cout << "The permutations are\n";
	cout << a << b << c << endl;
	cout << a << c << b << endl;
	cout << b << a << c << endl;
	cout << b << c << a << endl;
	cout << c << a << b << endl;
	cout << c << b << a << endl;
	return 0;
}