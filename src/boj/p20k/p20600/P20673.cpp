#include <bits/stdc++.h>
using namespace std;
int c, h;
string ans;
int main(void){
    cin >> c >> h;
    if(c <= 50 && h <= 10) {
        ans = "White";
    } else if(h > 30) {
        ans = "Red";
    } else {
        ans = "Yellow";
    }
    cout << ans;
}
