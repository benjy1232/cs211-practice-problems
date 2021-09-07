#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
	//Declaration of Variables
	int arr[SIZE];
	int actSize, searchNum, numOccur=0;
	//Function begin
	//Creation of array
	cout << "Please enter array size: ";
	cin >> actSize;
	for(int i=0; i<actSize; i++){
		cout << "Please enter element " << i << ": ";
		cin >> arr[i];
	}
	//User prompt for number to search for
	cout << "Please enter number to search for: ";
	cin >> searchNum;
	//Searches for number
	for(int j=0; j<actSize; j++){
		if(arr[j]==searchNum){
			numOccur++;
		}
	}
	cout << numOccur << endl;
	return 0;
}
