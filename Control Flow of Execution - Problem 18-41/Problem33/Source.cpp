#include <iostream>
using namespace std;

int main(void) {
	int n, sum = 0;
	cout << "Please enter a number: ";
	cin >> n;
	for (int i = 0; 2 * i <= n; i++) {
		sum = 2 * i + sum;
	}
	cout << "Sum of all even numbers up to " << n << ": " << sum;
	return 0;
}