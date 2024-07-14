#include <iostream>
using namespace std;
int k,q;
int time = 0;
int main(void) {
    cin >> k >> q;
    while(q--> 0) {
        int t;
        char ans;
        
        cin >> t >> ans;
        time += t;
        if (time >= 210) break;
        if (ans == 'T') {
            k++;
            if (k == 9) k = 1;
        }
    }
    cout << k;
}
