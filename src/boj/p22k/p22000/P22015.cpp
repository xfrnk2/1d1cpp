#include <bits/stdc++.h>
using namespace std;
int a, b, c, u;
int main(void){
    cin >> a >> b >> c;
    u = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << u - a + u - b + u - c;
}
