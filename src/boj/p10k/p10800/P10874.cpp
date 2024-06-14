#include <iostream>
using namespace std;
int n;
int main(void) {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        bool flag = true;
        for (int j = 1; j <= 10; j++) {
            int x;
            cin >> x;
            if (x != (j - 1) % 5 + 1) {
                flag = false;
            }
        }
        if (flag) {
            cout << i << '\n';
        }
    }
}
