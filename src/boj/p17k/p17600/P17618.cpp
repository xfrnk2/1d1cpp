#include <bits/stdc++.h>
using namespace std;
int n, sum, ans;
int main(void){
    cin >> n;
    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        sum = 0;
        for(int j = 0; j < s.size(); j++){
            sum += s[j] - '0';
        }
        ans += (i % sum == 0) ? 1 : 0;
    }
    cout << ans;
}
