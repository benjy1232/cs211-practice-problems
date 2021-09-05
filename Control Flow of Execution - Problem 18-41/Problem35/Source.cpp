#include <iostream>
using namespace std;

int main(void) {
	int n, fact=1;
	cout << "Please enter a number: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	cout << "Factorial of " << n << ": " << fact;
	return 0;
}
