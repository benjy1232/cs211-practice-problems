#include <iostream>
using namespace std;

int main(void) {
	float tempF, tempC;
	cout << "Please enter temperature in Celsius: ";
	cin >> tempC;
	tempF = tempC * 9 / 5 + 32; //formula to convert from c to f
	cout << "Temperature " << tempC << "C is " << tempF << "-degree Fahrenheit";
	return 0;
}
