#include <iostream>
using namespace std;

int main(void) {
	double x,y;
	int i,z;
	cout << "Please enter a number: ";
	cin >> x;
	y = 1;
	for (i = 0; x >= 1;i++) {
		x = x / 10;
	}
	cout << i;
	for (int j = 0; j<i; j++)
	{
		x = x * 10;
		z = x;
		z = z % 10;
		switch (z) {
		case(0):
			cout << "zero ";
			break;
		case(1):
			cout << "one ";
			break;
		case(2):
			cout << "two ";
			break;
		case(3):
			cout << "three ";
			break;
		case(4):
			cout << "four ";
			break;
		case(5):
			cout << "five ";
			break;
		case(6):
			cout << "six ";
			break;
		case(7):
			cout << "seven ";
			break;
		case(8):
			cout << "eight ";
			break;
		case(9):
			cout << "nine ";
			break;
		}
	}
	return 0;
}
