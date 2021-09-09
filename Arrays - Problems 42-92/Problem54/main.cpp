#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
    int arr[SIZE];
    int search, actSize, k=0;
    for(int i=0; i<SIZE; i++){
        arr[i]=0;
    }
    cout << "Please enter array size: ";
    cin >> actSize;
    while(actSize>SIZE){
        cout << "Out of range, please enter a number below 1000\n";
        cin >> actSize;
    }
    for(int j=0; j<actSize; j++){
        cout << "Please enter element " << j << ": ";
        cin >> arr[j];
    }
    cout << "Please enter number to search for: ";
    cin >> search;
    while(arr[k]!=search){
        k++;
    }
    cout << k;
}