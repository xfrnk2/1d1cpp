#include <iostream>
using namespace std;
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    long long ans;
    cin >> n;
    ans = 0;
    for (int i = 1; i <= n; i ++) {
        ans += (n/i) * i;
    }
    cout << ans;
}
