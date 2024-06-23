#include <iostream>
using namespace std;
int n, c, t;
int main(void) {
    cin >> t;
    while (t--) {
        cin >> n >> c;
        cout << (n % c == 0 ? n / c : n / c + 1) << '\n';
    }
}
