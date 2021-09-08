//Given a sorted array, remove the duplicates such that each element only appears once
#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
    int arr[SIZE];
    int newArr[SIZE];
    int actSize, remove, x=0;
    bool flag;
    for(int i=0; i<SIZE; i++){
        arr[i]=0;
        newArr[i]=0;
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
    for(int k=0; k<actSize; k++){
         flag = 0; //flag set to 0 at the beginning of loop to make sure it only goes into if statement if it did not match any previous number
        for(int l=0; l<actSize; l++){
            if(arr[k]==newArr[l]){//Compares arr[k] with newArr[l] and if they are equal flag is set to 1 to skip if statement at the end of the major loop
                flag=1;
            }
        }
        if(flag==0){//if the previous loop did not any matches then it will go into this statement
            newArr[x]=arr[k];//sets num[x] equal to arr[k]
            x++; //increments x as to not overwrite any previous elements
        }
    }
    for(int m=0; m<x;m++){
        if(m==0){
            cout << "[" << newArr[m] << ", ";
        }else if(m<x-1){
            cout << newArr[m] << ", ";
        }else{
            cout << newArr[m] << "]\n";
        }
    }
    return 0;
}