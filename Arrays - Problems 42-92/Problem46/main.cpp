#include<iostream>
using namespace std;
const int SIZE = 999;

int main(void) {
	int x, i = 0;
	cout << "Please enter integer: ";
	cin >> x;
	double doubx = x;
	for (i = 0; doubx > 1; i++) {
		doubx = doubx / 10;
	}
	int arr[SIZE];
	for (int j = 0; j < i; j++) {
		doubx = doubx * 10;
		int y = doubx;
		y = y % 10;
		arr[j] = y;
	}
	for (int k = 0; k < i; k++) {
		if (k == 0)
			cout << "[" << arr[k] << ", ";
		else if (k < i - 1)
			cout << arr[k] << ", ";
		else
			cout << arr[k] << "]\n";
	}
	return 0;
}
