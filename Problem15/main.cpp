#include <iostream>
using namespace std;

int main(void) {
	double a, b, c;
	cout << "Please enter first number (a): ";
	cin >> a;
	cout << "Please enter second number (b): ";
	cin >> b;
	c = a + b;
	c = c * c;
	cout << "Square of (" << a << " + " << b << ") is " << c;
	return 0;
}
