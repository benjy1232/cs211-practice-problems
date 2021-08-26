#include<iostream>
using namespace std;

int main(void) {
	int x,y, i,j,k;
	cout << "Please enter a number: ";
	cin >> x;
	y = x-1;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			cout << ".";
		}
		for (k = x-1; k >= j; k--) {
			cout << "*";
		}
		y--;
		cout <<  endl;
	}
}