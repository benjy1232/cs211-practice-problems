#include <iostream>
using namespace std;

int main(void) {
	int x, y;
	cout << "Please enter your first number: ";
	cin >> x;
	cout << "Please enter your second number: ";
	cin >> y;
	int z = x + y < 100;
	cout << "Sum less than 100: ";
	if (z == 1) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	return 0;
}
