#include <bits/stdc++.h>
using namespace std;
int arr[101];
int ans[101];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    ans[1] = arr[1];
    
    for (int i = 2; i <= n; i++) {
        int v = 0;
        for (int j = 1; j <= i; j++) {
            v += ans[j];
        }
        ans[i] = i * arr[i] - v;
    }
    
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << ' ';
    }
}

