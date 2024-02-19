#include <bits/stdc++.h>
using namespace std;
int t, n, a, b;
int main(void){
    
    cin >> t;
    while(t--> 0){
        cin >> n;
        while(n--> 0){
            cin >> a >> b;
            cout << (a + b) << ' ' << (a * b) << '\n';
        }
    }
}
