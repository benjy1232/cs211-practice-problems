#include<iostream>
using namespace std;

int main(void) {
	int n1, n2, x;
	cout << "Please enter first number: ";
	cin >> n1;
	cout << "Please enter second number: ";
	cin >> n2;
	x = n1 % n2;
	if (x != 0) {
		cout << "Number " << n1 << " is not a multiple of " << n2;
	}
	else {
		cout << "Number " << n1 << " is a multiple of " << n2;
	}
}