//Write a program to find and print all the unique elements of a a given array of integers
#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
    //Declaration of variables
    int arr[SIZE];
    int num[SIZE];
    int actSize, x=0;
    bool flag=0;
    //Initializing of arr by setting each value to 0
    for(int i=0; i<SIZE; i++){
        arr[i]=0;
    }
    //Asking for user input on array
    cout << "Please enter array size: ";
    cin >> actSize;
    //Checks to see if given size is large than array size
    while(actSize>SIZE){
        cout << "Out of range, please input an array smaller than 1000";
        cin >> actSize;
    }
    //Adding elements to array as input from user
    for(int j=0; j<actSize; j++){
        cout << "Please enter element " << j << ": ";
        cin >> arr[j];
    }
    //Checking to see if number has already been in array
    for(int k=0; k<actSize; k++){
        flag = 0; //flag set to 0 at the beginning of loop to make sure it only goes into if statement if it did not match any previous numbers
        for(int l=0; l<actSize; l++){
            if(arr[k]==num[l]){//Compares arr[k] with num[l] and if they are equal flag is set to 1 to skip if statement at the end of the major loop
                flag=1;
            }
        }
        if(flag==0){//if the previous loop did not any matches then it will go into this statement
            num[x]=arr[k];//sets num[x] equal to arr[k]
            x++; //increments x as to not overwrite any previous elements
        }
    }
    //Outputs all the numbers in array
    for(int m=0; m<x;m++){
        if(m==0){
            cout << "[" << num[m] << ", ";
        }else if(m<x-1){
            cout << num[m] << ", ";
        }else{
            cout << num[m] << "]\n";
        }
    }
    return 0;
}