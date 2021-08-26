#include <iostream>
using namespace std;

int main(void) {
	double a, b, c;
	cout << "Please enter first number (a): ";
	cin >> a;
	cout << "Please enter second number (b): ";
	cin >> b;
	c = a + b;
	c = c * c * c;		//(a^3 + 3 * a^2 * b + 3 * a * b^2 + b^3) = (a+b)^3
	cout << "Result: " << c;
	return 0;
}
