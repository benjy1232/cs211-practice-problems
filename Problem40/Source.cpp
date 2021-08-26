#include <iostream>
using namespace std;

int main(void) {
    int x, i , j,z=0; // i=2 because 1 and 2 are prime and putting 2 would be composite otherwise :: z=0 for if statement later
    cout << "Please enter a number: ";
    cin >> x;
    int y = x % i;
    cout << "Primes: \n";
    for (i=2; i < x; i++) {
        for (j = 2; j < i; j++) {
            y = i % j;          // i is divided by every number beneath it
            if (y == 0) { // IF there is even ONE number it is divisible by, z=1 so it skips if afterwards
                z = 1;
            }
        }
        if (z==0) {
            cout << i << endl;
        }
        z = 0;
    }
    return 0;
}