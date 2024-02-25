#include <iostream>
using namespace std;
int t,s,n,q,p;
int ans = 0;
int main() {

    cin >> t;
    while (t --) {
        cin >> s >> n;
        while (n --) {
            cin >> q >> p;
            ans += p * q;
        }
        cout << ans + s << '\n';
        ans = 0;
    }
}
