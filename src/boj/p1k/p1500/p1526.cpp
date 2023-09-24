#include <bits/stdc++.h>

using namespace std;

int ans = 0;
void exec(int n, int sum){
    if (sum <= n) {
        exec(n, sum * 10 + 7);
        exec(n, sum * 10 + 4);
        ans = max(ans, sum);
    }
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    exec(n, 0);
    cout << ans;
}
