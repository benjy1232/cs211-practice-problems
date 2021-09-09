//Insert an element in an array at given index and print new array
#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
    int arr[SIZE];
    int newArr[SIZE+1];
    int newElement, actSize,pushback, k=0;
    for(int i=0; i<SIZE;i++){
        arr[i]=0;
        newArr[i]=0;
    }
    cout << "Please enter array size: ";
    cin >> actSize;
    while(actSize>SIZE){
        cout << "Out of range, please enter a number below 1000";
    }
    for(int j=0; j<actSize; j++){
        cout << "Please enter element " << j << ": ";
        cin >> arr[j];
    }
    cout << "Please enter element to be inserted: ";
    cin >> newElement;
    cout << "Please enter index to be inserted at: ";
    cin >> pushback;
    while(k<pushback){
        newArr[k]=arr[k];
        cout << newArr[k] << endl;
        k++;
    }
    newArr[pushback]=newElement;
    k++;
    cout << newArr[pushback] << endl;
    while(k<=actSize){
        newArr[k]=arr[k-1];
        cout << newArr[k] << endl;
        k++;
    }
    for(int l=0; l<=actSize; l++){
        if(l==0){
            cout << "[" << newArr[l] << ", ";
        }else if(l<actSize){
            cout << newArr[l] << ", ";
        }else{
            cout << newArr[l] << "]";
        }
    }
    return 0;
}