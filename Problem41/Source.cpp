#include<iostream>
using namespace std;

int main(void) {
	double x=0, average, i=0,y=0;
	while (x >= 0){
		cout << "Please enter number " << i+1 << " : ";
		cin >> x;
		if (x >= 0) {
			y = y + x;
			i++;
		}
	} 
	average = y / i;
	cout << "The average of the numbers is: " << average;
	return 0;
}
