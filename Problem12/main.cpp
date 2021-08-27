#include <iostream>
using namespace std;

int main(void) {
	float tempF, tempC;
	cout << "Please enter temperature in Fahrenheit: ";
	cin >> tempF;
	tempC = (tempF - 32) * 5 / 9; //Formula to convert from f to c
	cout << "Temperature " << tempF << "F is " << tempC << "-degree Celsius";
	return 0;
}
