#include <iostream>
using namespace std;

int main(void) {
	int x;
	cout << "Please enter a number: ";
	cin >> x;
	if (x > 0) {
		cout << "Number is positive";
	}
	else if (x == 0) {
		cout << "Zero is neither positive or negative";
	}
	else {
		cout << "Number is negative";
	}
	return 0;
}
