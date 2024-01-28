#include <bits/stdc++.h>
using namespace std;

int N = 31;
int d[31][31];

int main(void) {
    for (int i = 0; i < N; i++) {
        d[i][0] = 1;
    }
    for (int i = 1; i < N; i++) {
        for (int j = 1; j <= i; j++) {
            d[i][j] = d[i - 1][j - 1] + d[i - 1][j];
        }
    }
    int n, k;
    cin >> n >> k;
    cout << d[n - 1][k - 1];
}
