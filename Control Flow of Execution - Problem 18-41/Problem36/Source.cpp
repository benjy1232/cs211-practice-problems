//Done with arrays because I do not want to write out a>b or all that shit
#include <iostream>
using namespace std;

int main(void) {
	int a[5], max1 = 1, max2 = 0; //array a of size 5 declared, max1>max2 for later functions
	int sum; //sum of all the variables up to this point

	for (int i = 0; i <= 4; i++) {
		cout << "Please enter a number: ";
		cin >> a[i];
		if (a[i] > max1) { //chekcs if a[i] is greater than current max1
			max2 = max1; //sets previous max to second greatest
			max1 = a[i]; //a[i] gets equal to max1
		}
		else if (a[i] > max2) { //checks for second largest variable
			max2 = a[i]; //becomes whatever the input was
		}
	}
	sum = max1 + max2;
	cout << sum;
	return 0;
}
