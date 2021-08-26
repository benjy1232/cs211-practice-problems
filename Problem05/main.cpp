#include <iostream>
using namespace std;

int main(void) {
	int x, y;
	cout << "Please enter first number (X): ";
	cin >> x;
	cout << "Please enter second number (Y): ";
	cin >> y;
	cout << "Sum of numbers (X+Y): " << x + y << endl;
	cout << "Difference of numbers (X-Y): " << x - y << endl;
	cout << "Difference of numbers (Y-X): " << y - x << endl;
	cout << "Product of numbers (X*Y): " << x * y << endl;
	cout << "Division of numbers (X/Y): " << x / y << endl;
	cout << "Division of numbers (Y/X): " << y / x << endl;
	return 0;
}
