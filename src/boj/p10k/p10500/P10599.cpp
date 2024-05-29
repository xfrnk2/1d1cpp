#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main(void){
    while(true){
        cin >> a >> b >> c >> d;
        if(!a && !b && !c && !d) break;
        cout << c - b << ' ' << d - a  << '\n';
    }
}
