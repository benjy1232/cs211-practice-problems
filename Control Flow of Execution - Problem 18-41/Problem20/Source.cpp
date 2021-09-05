#include <iostream>
using namespace std;

int main(void) {
	int count;
	cout << "Please enter in a number: ";
	cin >> count;
	cout << "Counting down:\n";
	while (count > 0) {
		cout << "Counter is " << count << endl;
		count--;
	}
}