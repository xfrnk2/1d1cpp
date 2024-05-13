#include <bits/stdc++.h>
using namespace std;
int t;
long long student, total, cnt;
int main(void){
    cin >> t;
    while(t--){
        student = total = cnt = 0;
        cin >> student;
        for(int i = 0; i < student; i++) {
            cin >> cnt;
            total = (total + cnt) % student;
        }
        cout << ((total % student) ? "NO" : "YES") << "\n";
    }
}
