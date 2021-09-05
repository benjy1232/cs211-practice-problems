#include <iostream>
using namespace std;

int main(void) {
	float x, y, z;
	cout << "Please enter first number (x): ";
	cin >> x;
	cout << "Please enter second number (y): ";
	cin >> y;
	
	z = x == y;
	cout << "Equality check (x==y): " << z << endl;

	z = x != y;
	cout << "Non-equality check (x!=y): " << z << endl;
	
	z = x < y;
	cout << "Less than check (x<y): " << z << endl;
	
	z = x > y;
	cout << "Greater than check (x>y): " << z << endl;
	
	z = x <= y;
	cout << "Less than or equal to check (x<=y): " << z << endl;
	
	z = x >= y;
	cout << "Greater than or equal to check (x>=y): " << z << endl;
	
	return 0;
}
