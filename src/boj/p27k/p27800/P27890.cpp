#include <iostream>
using namespace std;
int x, N;
int main(void) {
    cin >> x >> N;
    while (N--) {
        x = (x % 2 == 0 ? x / 2 : x * 2) ^ 6;
    }
    cout << x;
}
