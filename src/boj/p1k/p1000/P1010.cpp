#include <iostream>
using namespace std;
int t, n, m, r, ans;
int main()
{
    cin >> t;
    while (t --) {
        cin >> n >> m;
        ans = r = 1;
        for (int i = m; i > m - n; i --) ans = ans * i / (r++);
        cout << ans << endl;
    }
}
