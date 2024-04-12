#include <bits/stdc++.h>
using namespace std;
long long w, b;
int main(void){
    cin >> w >> b;
    cout << ((w >= b) ? b : w + 1);
}
