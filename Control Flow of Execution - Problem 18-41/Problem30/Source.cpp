#include <iostream>
using namespace std;

int main(void) {
	double x;
	int i,z;
	cout << "Please enter a number: ";
	cin >> x;
	for (i = 0; x >= 1;i++) { //This first for statement converts the input from being >1 to being 1>x>0 so 56 becomes .56
		x = x / 10;				//The i in this statement tells us how many times to multiply by 10 for the next for statement
	}
	for (int j = 0; j<i; j++)
	{
		x = x * 10; //We are undoing what we did in the first loop to make sure the first number read from left to right is the first number that appears
		z = x;		//We are not able to do modulus with doubles, we can only do that to integers
		z = z % 10; //Will be plugged into switch statement
		switch (z) { //switches work like a really big if statement so if z==0 then we go to case(0)
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
