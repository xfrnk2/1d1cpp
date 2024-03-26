#include <bits/stdc++.h>
using namespace std;

int t, tn, a, b, c, ans;

int main(void) {
    cin >> t;
    while (t--) {
        cin >> tn >> a >> b >> c;
        ans = a + b + c;
        cout << tn << ' ' << ans << ' ';    
        cout << ((ans >= 55 && a >= 11 && b >= 8 && c >= 12) ? "PASS" : "FAIL") << "\n";
    }
}
