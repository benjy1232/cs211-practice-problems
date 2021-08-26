#include <iostream>
using namespace std;

int main(void) {
    int x, i = 2, z = 0; // i=2 because 1 and 2 are prime and putting 2 would be composite otherwise :: z=0 for if statement later
    cout << "Please enter a number: ";
    cin >> x;
    int y = x % i;
    for (i; i < x; i++) {
        y = x % i;
        if (y == 0) {
            z = 1;
            break;
        }
    }
    if (z == 0) {
        cout << "It is prime";
    }
    else {
        cout << "It is not prime";
    }
    return 0;
}