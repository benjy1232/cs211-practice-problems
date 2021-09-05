#include <iostream>
using namespace std;

int main(void) {
	int n, form=0;
	cout << "Please enter a number: ";
	cin >> n;
	form = n * (n + 1) / 2;
	cout << "Sum of all numbers up to " << n << " : " << form;
	return 0;
}