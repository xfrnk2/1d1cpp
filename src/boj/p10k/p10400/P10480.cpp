#include <iostream>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        cout << n << (n % 2 == 0 ? " is even" : " is odd") << "\n";
    }
}
