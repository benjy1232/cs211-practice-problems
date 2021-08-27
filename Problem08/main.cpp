#include <iostream>
using namespace std;

int main(void) {
	int x, y;
	cout << "Please enter your first number: ";
	cin >> x;
	cout << "Please enter your second number: ";
	cin >> y;
	int z = x + y < 100; //boolean test ran on x+y and if it is less than 100 z becomes 1 then it goes through the first else
	cout << "Sum less than 100: ";
	if (z == 1) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	return 0;
}
