#include <bits/stdc++.h>

using namespace std;

double k, a, b, n;
int main(void){
    cin >> k >> a >> b;
    n = (max(a, b) - min(a, b)) / 2.0;
    cout << k * k - n * n;
}
