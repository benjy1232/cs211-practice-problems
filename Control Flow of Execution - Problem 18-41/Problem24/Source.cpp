#include <iostream>
using namespace std;

int main(void) {
	int x,y;
	cout << "Please enter a number: ";
	cin >> x;
	y = x % 7;
	switch (y) {
	case(0):
		cout << "Number is a multiple of 7";
		break;
	default:
		cout << "Number is not a multiple of 7";
		break;
	}
	return 0;
}