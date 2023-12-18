#include <iostream>

using namespace std;
int n, x, y;
int a, b;
int main(void) {
    a = b = 100;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x > y) b -= x;
        else if (x < y) a -= y;
    }
    cout << a << '\n' << b;
}
