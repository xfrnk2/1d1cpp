#include <iostream>
using namespace std;
int n, t, ans = 0;
int main(void) {
    cin >> n;
    ans += (n - 1) * 8;
    for (int i = 0; i < n; i++) {
        cin >> t;
        ans += t;
    }
    cout << ans / 24 << " " << ans % 24;
} 
