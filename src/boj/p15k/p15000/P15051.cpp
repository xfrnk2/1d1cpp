#include <bits/stdc++.h>
using namespace std;
int arr[3], ans = 0x3f3f3f3f;

int main(void) {
    for(int i = 0; i < 3; i++) cin >> arr[i];
    for(int f = 0; f < 3; f++){
        int sum = 0;
        for(int i = 0; i < 3; i++) 
            sum += abs(i - f) * arr[i] * 2;
        ans = min(ans, sum);
    }
    cout << ans;
}

