#include <iostream>
using namespace std;

int main(void) {
	int x;
	cout << "Please enter a number: ";
	cin >> x;
	if (x%2) {
		cout << "It is odd";
	}
	else {
		cout << "It is even";
	}
	return 0;
}