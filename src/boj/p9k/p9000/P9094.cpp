#include <bits/stdc++.h>
using namespace std;
int n, m, t, ans;
int main(void){
    cin >> t;
    while(t--> 0){
        ans = 0;
        cin >> n >> m;
        for(int a = 1; a < n; a++) {
            for(int b = 1; b < n; b++) {
                if(a >= b) continue;
                double res = (double) (a*a + b*b + m) / (a*b);
                ans += (((int)res == res) ? 1 : 0);
            }
        }
        cout << ans << '\n';
    }
}
