#include <iostream>
using namespace std;

int main(void) {
	int N1, N2,N3=1;
	cout << "Please enter first number: ";
	cin >> N1;
	cout << "Please enter second number: ";
	cin >> N2;
	for (int i = 0; i < N2; i++) {
		N3 = N1 * N3;
	}
	cout << "Result of " << N1 << " raised to the power of " << N2 << ":" << N3;
	return 0;
}