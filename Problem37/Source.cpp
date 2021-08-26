#include <iostream>
using namespace std;

int main(void) {
    int x, y, i;
    cout << "Please enter a number: ";
    cin >> x;
    for (i = 0; x >= 1; i++) {
        y = x % 10;
        x = x / 10;
        cout << y;
    }

    return 0;
}
