#include <iostream>
using namespace std;

int y;
int main(void) {
    cin >> y;
    while (1) {
        int x;
        cin >> x;
        if (x == 0) {
            break;
        }
        cout << x << (x % y == 0 ? " is a multiple of " : " is NOT a multiple of ") << y << ".\n";
    }
}
