#include<iostream>
using namespace std;

int main(void){
	int x,y;
	cout << "Please enter array size: ";
	cin >> x;
	int arr[x+1];
	for (int i=0; i<x; i++){
		cout << "Please enter element " << i << ": ";
		cin >> arr[i+1];
	}
	int even[x];
	int odd[x];
	int newArr[x];
	int ev=0;
	int od=0;
	for(int j=0; j<x; j++){
		even[j]=0;
		odd[j]=0;
		newArr[j]=0;
	}
	for(int l=0; l<x; l++){
		if(arr[l+1]%2==0){
			even[ev]=arr[l+1];
			ev++;
		}else{
			odd[od]=arr[l+1];
			od++;
		}
	}
	int m=0,n=0;
	while(even[m]!=0){
		newArr[m]=even[m];
		m++;
	}
	while(odd[n]!=0){
		newArr[m]=odd[n];
		n++;
		m++;
	}
	for(int k=0; k<x; k++){
		if(k==0){
			cout << "[" << newArr[k] << ", ";
		}else if(k<x-1){
			cout << newArr[k] << ", ";
		}else if(k==x-1){
			cout << newArr[k] << "]" << endl;
		}
	}
	return 0;
}
