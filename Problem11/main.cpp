#include <iostream>
using namespace std;

int main(void) {
	float hr;
	int sec;
	cout << "Please enter hours: ";
	cin >> hr;
	sec = hr * 3600; //1 min=60 sec; 1 hour = 60 minutes; 1 hour=60 minutes/hour * 60 seconds/minute = 3600 seconds
	cout << "Time in seconds: " << sec;
	return 0;
}
