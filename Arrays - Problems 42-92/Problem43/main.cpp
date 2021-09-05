#include<iostream>
using namespace std;

int main(void){
	int x;
	cout << "Please enter array size: ";
	cin >> x;
	int arr[x];
	int commonArr[x];
	for(int i=0; i<x; i++){
		cout << "Please enter element " << i << ": ";
		cin >> arr[i];
		commonArr[i]=0;
	}
	int mostCommon;
	for(int j=0; j<x; j++){
		for(int k=0; k<x; k++){
			if(arr[j]==arr[k]){
				commonArr[j]++;
			}
		}
	}
	int tempMax = commonArr[0];
	int maxEle;
	for(int y=0; y<x;y++){
		if(commonArr[y]>tempMax){
			tempMax=commonArr[y];
			maxEle=y;
		}
	}
	cout << arr[maxEle] << endl;
}
