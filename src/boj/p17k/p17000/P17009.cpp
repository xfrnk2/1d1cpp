#include <iostream>
using namespace std;

static int n, a, b;
int main(void) {
    a = b = 0;
    for (int i = 3; i > 0; i--) {
        cin >> n;
        a += n * i;
    }
    for (int i = 3; i > 0; i--) {
        cin >> n;
        b += n * i;
    }
    cout << ((a > b) ? 'A' : ((a < b) ? 'B' : 'T'));
}
