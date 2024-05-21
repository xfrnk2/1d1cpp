#include <iostream>
#include <cmath>

using namespace std;
int n;
int main(void) {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    cin >> n;
    int i = 1;
    for (; i <= n; i++){
        if ((1 + i + i * i) == n) break;
    }
    cout << i;
}
