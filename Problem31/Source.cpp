#include<iostream>
using namespace std;

int main(void) {
	int n, sum=0;
	cout << "Please enter a number: ";
	cin >> n;
	for (int i = 0; i <= n; i++) {
		sum = sum + i;
	}
	cout << "Sum of all numbers up to "<< n << ": " << sum;
	return 0;
}