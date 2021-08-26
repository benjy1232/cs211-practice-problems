#include <iostream>
using namespace std;

int main(void) {
	float min;
	int sec;
	cout << "Please enter minutes: ";
	cin >> min;
	sec = min * 60;
	cout << "Time in seconds: " << sec;
	return 0;
}
