#include <iostream>
using namespace std;
int n, i;

int main(void) {
    cin >> n;
     for (int i = 1; i <= n; i++) {
        cout << i << " ";
        if (i == n || i % 6 == 0) cout << "Go! ";
    }
}
