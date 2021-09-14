//Works for sets of size 3 and kinda for sets size 4
#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
    int arr[SIZE];
    int newArr[SIZE];
    int actSize;
    int x=0, n=0;;
    for(int i=0; i<SIZE; i++){
        arr[i]=0;
        newArr[i]=0;
    }
    cout << "Please enter array size: ";
    cin >> actSize;
    for(int j=0; j<actSize; j++){
        cout << "Please enter element " << j << ": ";
        cin >> arr[j];
    }
    for(int l=0; l<actSize; l++){
        cout << arr[l] << endl;
    }
    for(int k=0; k<actSize; k++){
        cout << arr[k] << " ";
    }
    cout << endl;
    //for(int m=actSize-1; m>=1; m--){
     //   cout << arr[m] << " ";
    //}
    for(x=0;x<actSize;x++){
        for(n=0;n<actSize;n++){
            if(n!=x){
                cout << arr[n] << " ";
            }
        }
        cout << endl;
    }
}