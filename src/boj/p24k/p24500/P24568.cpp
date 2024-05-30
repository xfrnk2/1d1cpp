#include <bits/stdc++.h>
using namespace std;
int r, s, ans;

int main(void){
    cin >> r >> s;
    ans = r * 8 + s * 3 - 28;
    if(ans < 0) ans = 0;
    cout << ans;
}

