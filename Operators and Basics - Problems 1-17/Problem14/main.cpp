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
	total = pigs * 4 + cows * 4 + chickens * 2; //pigs have 4 legs, cows have 4 legs, chickens have 2 :: take the sum of all those parts to find total legs
	cout << "Total number of legs for the animals: " << total;
	return 0;
}
