#include <iostream>
using namespace std;

int main(void) {
	float tempF, tempC;
	cout << "Please enter temperature in Fahrenheit: ";
	cin >> tempF;
	tempC = (tempF - 32) * 5 / 9;
	cout << "Temperature " << tempF << "F is " << tempC << "-degree Celsius";
	return 0;
}
