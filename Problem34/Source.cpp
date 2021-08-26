#include <iostream>
using namespace std;

int main(void) {
	int n, sum=0;
	cout << "Please enter a number: ";
	cin >> n;
	for (int i = 0; 2*i + 1 <= n; i++) {
		sum = sum + 1 + 2 * i;
	}
	cout << "The sum of all odd numbers up to " << n << ": " << sum;
	return 0;
}
