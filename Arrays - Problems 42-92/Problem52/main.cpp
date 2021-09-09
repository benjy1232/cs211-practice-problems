#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
    int arr[SIZE];
    int sum[SIZE];
    int actSize;
    for(int i=0; i<SIZE; i++){
        arr[i]=0;
        sum[i]=0;
    }
    cout << "Please enter array size: ";
    cin >> actSize;
    while(actSize>SIZE){
        cout << "Out of range, please neter a value below 1000\n";
        cin >> actSize;
    }
    for(int j=0;j<actSize; j++){
        cout << "Please enter element " << j << ": ";
        cin >> arr[j];
    }
    sum[0]=arr[0];
    for(int k=1; k<actSize; k++){
        sum[k]=arr[k]+sum[k-1];
    }
    for(int l=0; l<actSize; l++){
        if(l==0){
            cout << "[" << sum[l] << ", ";
        }else if(l<actSize-1){
            cout << sum[l] << ", ";
        }else{
            cout << sum[l] << "]";
        }
    }
    return 0;
}