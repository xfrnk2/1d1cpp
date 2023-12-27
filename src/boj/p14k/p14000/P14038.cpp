#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int main(){
    for(int i = 0; i < 6; i++){
        char flag;
        cin >> flag;
        if(flag == 'W') cnt++;
    }
    if(cnt == 0) cout << -1;
    else if(cnt >= 5) cout << 1;
    else if(cnt >= 3) cout << 2;
    else cout << 3;
}
