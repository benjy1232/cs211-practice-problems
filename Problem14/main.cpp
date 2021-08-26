#include <iostream>
using namespace std;

int main(void) {
	int cows, chickens, pigs, total;
	cout << "Please enter number of chickens: ";
	cin >> chickens;
	cout << "Please enter number of cows: ";
	cin >> cows;
	cout << "Please enter number of pigs: ";
	cin >> pigs;
	total = pigs * 4 + cows * 4 + chickens * 2;
	cout << "Total number of legs for the animals: " << total;
	return 0;
}