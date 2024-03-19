#include <iostream>
using namespace std;
int n, num, ans = 0;
int main(void) {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        ans += num;
    }
    cout << ans;
}
