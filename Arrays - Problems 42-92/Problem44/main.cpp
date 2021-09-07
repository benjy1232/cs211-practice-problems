#include<iostream>
using namespace std;
const int SIZE = 999;

int main(void) {
	int x;
	int arr[SIZE];
	int check[6]{ 1,2,3,4,5,6 };
	int missing[6]{ 0,0,0,0,0,0 };
	cout << "Please enter array size: ";
	cin >> x;
	if (x > SIZE) {
		cout << "Too large of an array";
		return 0;
	}
	
	for (int i = 0; i < x; i++) {
		cout << "Please enter element " << i << ": ";
		cin >> arr[i];
	}
	for (int j = 0; j < x; j++) {
		for (int k = 0; k < 6; k++) {
			if (arr[j] == check[k]) {
				missing[k]++;
			}
		}
	}
	for (int l = 0; l < 6; l++) {
		if (missing[l] == 0) {
			cout << check[l] << endl;
		}
	}

}
