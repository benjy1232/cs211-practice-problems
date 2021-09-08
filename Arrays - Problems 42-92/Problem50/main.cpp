#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
    int arr[SIZE];
    int newArr[SIZE];
    int actSize, remove, x=0, length;
    for(int i=0; i<SIZE; i++){
        arr[i]=0;
        newArr[i]=0;
    }
    cout << "Please enter size of array: ";
    cin >> actSize;
    while(actSize>SIZE){
        cout << "Out of range, please enter a value below 1000";
    }

    for(int j=0; j<actSize; j++){
        cout << "Please enter element " << j << ": ";
        cin >> arr[j];
    }
    cout << "Please enter number to be removed: ";
    cin >> remove;
    for(int k=0; k<actSize; k++){
        if(arr[k]==remove){
            arr[k]=0;
        }
    }
    for(int l=0; l<actSize; l++){
       if(arr[l]!=0){
           newArr[l-x]=arr[l];
       }else{
           x++;
       }
    }
    for(length=0; newArr[length]!=0; length++){
        length;
    }
    cout << length << endl;
    return 0;
}