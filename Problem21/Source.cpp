#include <iostream>
using namespace std;

int main(void) {
	int count;
	cout << "Please enter number: ";
	cin >> count;
	cout << "Counting up\n";
	for (int i = 1; i <= count; i++) {
		cout << "Counter is " << i << " of " << count << endl;
	}
	return 0;
}