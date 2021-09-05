#include <iostream>
using namespace std;

int main(void) {
	double min; //allows time to be put in as decimal
	int sec;
	cout << "Please enter minutes: ";
	cin >> min;
	sec = min * 60; // 60 seconds in a minute so that's the conversion factor
	cout << "Time in seconds: " << sec;
	return 0;
}
