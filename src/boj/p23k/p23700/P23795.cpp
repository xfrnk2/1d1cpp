#include <bits/stdc++.h>
using namespace std;
int value, ans;
int main() {

    while(true){
    cin >> value;
    if(value == -1) break;
    ans += value;
    }
    cout << ans;
}
