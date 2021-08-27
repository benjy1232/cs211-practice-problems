// Write a program that asks the user for two floating point numbers (say a and b) and 
// prints out the value of (a + b) squared

#include <iostream>
using namespace std;

int main(void) {
	double a, b, c;
	cout << "Please enter first number (a): ";
	cin >> a;
	cout << "Please enter second number (b): ";
	cin >> b;
	c = a + b; // takes the sum of two numbers
	c = c * c; // definition of squaring a number
	cout << "Square of (" << a << " + " << b << ") is " << c;
	return 0;
}
