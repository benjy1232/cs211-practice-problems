#include<iostream>
using namespace std;
const int SIZE = 999;

int main(void) {
	int x;
	int mostCommon;
	int arr[SIZE];
	int commonArr[SIZE];
	int maxEle;
	int tempMax;
	int fix; //fixes for insane amount of 0s
	cout << "Please enter array size: ";
	cin >> x;
	fix = SIZE - x;
	if (x > SIZE) {
		cout << "Too large of an array";
		return 0;
	}
	for (int pain = 0; pain < SIZE; pain++) {
		arr[pain] = 0;
		commonArr[pain] = 0;
	}
	for (int i = 0; i < x; i++) {
		cout << "Please enter element " << i << ": ";
		cin >> arr[i];
		commonArr[i] = 0;
	}
	for (int j = 0; j < x; j++) {
		for (int k = 0; k < x; k++) {
			if (arr[j] == arr[k]) {
				commonArr[j]++;
			}
		}
	}
	commonArr[0] = commonArr[0] - fix;
	tempMax = commonArr[0];
	for (int y = 0; y < x; y++) {
		if (commonArr[y] > tempMax) {
			tempMax = commonArr[y];
			maxEle = y;
		}
	}
	cout << arr[maxEle] << endl;
}