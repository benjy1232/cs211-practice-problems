#include <iostream>
using namespace std;

int main(void) {
	int x, y, z;
	cout << "Please enter first number: ";
	cin >> x;
	cout << "Please enter second number: ";
	cin >> y;
	z = x == y; //"==" acts as a boolean operator so if z=0 then z x==y is false and vice versa
	cout << "Result of comparison: " << z;
	return 0;
}
