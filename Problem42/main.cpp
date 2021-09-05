#include<iostream>
using namespace std;

int main(void){
    int x, max;
    cout << "Please enter array size: ";
    cin >> x;
    int arr[x];
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