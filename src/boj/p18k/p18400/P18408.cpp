#include <bits/stdc++.h>
using namespace std;
int arr[3], cnt = 0;

int main(void){
    for(int i = 0, x; i < 3; i++) {
        cin >> x;
        arr[x]++;
    }
    for(int i = 0; i < 3; i++) {
        cnt = max(cnt, arr[i]);
    }
    for(int i = 0; i < 3; i++) {
        if(cnt == arr[i]) {
            cout << i;
            break;
        }
    }
}
