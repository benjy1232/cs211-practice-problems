#include <iostream>
using namespace std;

int main(void) {
	int x, y, z;
	cout << "Please enter first number: ";
	cin >> x;
	cout << "Please enter second number: ";
	cin >> y;
	z = x == y;
	cout << "Result of comparison: " << z;
	return 0;
}