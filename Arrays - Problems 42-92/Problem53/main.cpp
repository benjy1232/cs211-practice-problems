#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
    int arr[SIZE];
    int sum[SIZE];
    int actSize, x=0;
    for(int i=0; i<SIZE; i++){
        arr[i]=0;
        sum[i]=0;
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
    for(int k=actSize-1; k>=0; k--){
      for(int l=0; l<actSize-x; l++){
          sum[l]=arr[k]+sum[l];
      }  
      x++;
    }
    for(int m=0; m<actSize; m++){
        if(m==0){
            cout << "[" << sum[m] << ", ";
        }else if(m<actSize-1){
            cout << sum[m] << ", ";
        }else{
            cout << sum[m] << "]";
        }
    }
    return 0;
}