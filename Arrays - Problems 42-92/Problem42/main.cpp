#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
    int x, max;
    cout << "Please enter array size: ";
    cin >> x;
    if(x>SIZE){
	    cout << "Too large of an array";
	    return 0;
    }
    int arr[SIZE];
    for(int i=0; i<x; i++){
        cout << "Please enter element " << i << ": ";
        cin >> arr[i];
    }
    max=arr[0];
    for(int j=0; j<x; j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    cout << max << endl;
    return 0;
}
