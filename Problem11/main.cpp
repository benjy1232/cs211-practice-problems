#include <iostream>
using namespace std;

int main(void) {
	float hr;
	int sec;
	cout << "Please enter hours: ";
	cin >> hr;
	sec = hr * 3600;
	cout << "Time in seconds: " << sec;
	return 0;
}