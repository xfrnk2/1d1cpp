#include <iostream>
using namespace std;
int n,ans = 0;
int main(void) {
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) ans += i;
    cout << ans * 5 - 24;
}
