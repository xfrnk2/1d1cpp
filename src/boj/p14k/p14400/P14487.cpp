#include <iostream>
using namespace std;
int a, b, mx = 0, ans = 0;
int main(void) {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        mx = (mx < b) ? b : mx;
        ans += b;
    }
    ans -= mx;
    cout << ans;
}
