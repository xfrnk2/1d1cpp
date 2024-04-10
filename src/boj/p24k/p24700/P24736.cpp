#include <bits/stdc++.h>
using namespace std;
int ans[2], arr[5];
int main(void){
    for(int k = 0; k < 2; k++){
        for(int i = 0; i < 5; i++) cin >> arr[i];
        ans[k] = arr[0] * 6 + arr[1] * 3 + arr[2] * 2 + arr[3] + arr[4] * 2;
    }
    for(int i = 0; i < 2; i++) cout << ans[i] << ' ';
}
