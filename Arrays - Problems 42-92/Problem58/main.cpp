//Find the largest sum in an array
#include<iostream>
using namespace std;

int main(void){
    const int SIZE=999;
    int arr[SIZE];
    int sum=0;
    int maxSum=arr[0];
    int actSize;
    for(int k=0; k<SIZE; k++){
        arr[k]=0;
    }
    cout << "Please enter number of elements in array: ";
    cin >> actSize;
    for(int l=0; l<actSize; l++){
        cout << "Please enter element " << l << ": ";
        cin >> arr[l];
    }
    for(int i=0; i<SIZE; i++){
        for(int j=i; j<SIZE; j++){
            sum=arr[j]+sum;
            if(sum>maxSum){
                maxSum=sum;
            }
        }
        sum=0;
    }
    cout << maxSum;
}