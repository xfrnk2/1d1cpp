#include <iostream>

using namespace std;
int n, m, ans;
int main(void) {
    cin >> n >> m;
    int a, b;
    ans = m;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        m = m + a - b;
        if (m < 0) {
            ans = 0;
            break;
        }
        if (m >= ans)
            ans = m;
    }
    cout << ans;
}
