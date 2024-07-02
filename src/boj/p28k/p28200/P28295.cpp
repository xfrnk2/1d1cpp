#include <iostream>
using namespace std;

int main(void) {
    int x = 1080; 

    for (int i = 0; i < 10; i++) {
        int d;
        cin >> d;

        if (d == 1) {
            x += 90;
        } else if (d == 2) {
            x += 180;
        } else if (d == 3) {
            x -= 90;
        }
    }

    x /= 90;
    x %= 4;

    if (x == 0) {
        cout << 'N';
    } else if (x == 1) {
        cout << 'E';
    } else if (x == 2) {
        cout << 'S';
    } else {
        cout << 'W';
    }
}
