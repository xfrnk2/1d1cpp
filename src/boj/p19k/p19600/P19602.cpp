#include <bits/stdc++.h>
using namespace std;
static int s, m, l, ans;
int main(){
    cin >> s >> m >> l;
    ans = s + m * 2 + l * 3;
    cout << (10 <= ans ? "happy" : "sad");
    
}
