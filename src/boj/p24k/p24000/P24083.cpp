#include <bits/stdc++.h>
using namespace std;
int a, b, ans;
int main(void){
    cin >> a >> b;
    ans = (a + b) % 12;
    cout << (ans ? ans : 12);
}
