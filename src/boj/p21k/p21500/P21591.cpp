#include <bits/stdc++.h>
using namespace std;
int w1, h1, w2, h2;
int main(void) {
    cin >> w1 >> h1 >> w2 >> h2;
    cout << (w1 - w2 >= 2 && h1 - h2 >= 2) ? 1 : 0;
}
