#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int m[1000];
    int max = 0;
    int c = 0;

    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }

    for (int j = 0; j < n; j++) {
        if (m[j] == c) {
            max++;
            c = (c + 1) % 3;
        }
    }

    cout << max;
}
