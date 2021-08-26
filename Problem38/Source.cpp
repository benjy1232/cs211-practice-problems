#include<iostream>
using namespace std;

int main(void) {
	int x, y, z, original, i;
	cout << "Please enter a number: ";
	cin >> x;
	original = x;
	z = 0;
	for (i = 0; x >= 1; i++) {
		y = x % 10;
		x = x / 10;
		z = z * 10 + y;
	}
	if (z == original) {
		cout << "The number is a palindrome";
	}
	else {
		cout << "The number is not a palindrome";
	}
	return 0;
}