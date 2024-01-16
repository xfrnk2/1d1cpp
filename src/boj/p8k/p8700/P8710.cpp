#include <iostream>

using namespace std;
long long k, w, m, ans = 0;
int main(void) {
    cin >> k >> w >> m;

 

    while (k < w) {
        k += m;
        ans++;
    }
    cout << ans;
}
