#include <iostream>
using namespace std;

int main(void) {
	int input;
	cout << "Please enter number: ";
	cin >> input;
	if (input >= 0) {
		cout << "Number is postiive";
	}
	else {
		cout << "Number is negative";
	}
	return 0;
}
