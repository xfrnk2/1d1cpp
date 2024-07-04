#include <bits/stdc++.h>
using namespace std;
double k, ans;
int main(){
    cin >> k;
    ans = 25.0 + k * 0.01;
    ans = (ans <= 100) ? 100.0 : (ans >= 2000) ? 2000.0 : ans;
    printf("%.2f", ans);
}
