#include<iostream>
using namespace std;

int main(void){
    double collatz;
    cout << "Please enter a number: ";
    cin >> collatz;
    cout << endl;
    while(collatz!=1){
        if((int)collatz%2==0){
            collatz=collatz/2;
            cout << collatz << endl;
        }else{
            collatz=collatz * 3 +1;
            cout << collatz << endl;
        }
    }
}