#include <iostream>
using namespace std;
int main(void) {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= 500; i++) {
        for (int j = i; j <= 500; j++) {
            if (i * i + n == j * j) ans++;
        }
    }
    cout << ans;
}
