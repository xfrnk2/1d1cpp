#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string S;
    
    cin >> N >> S;

    int ans = 0, x = 0;

    for (int i = 0; i < S.length(); ++i) {
        if (S[i] == 'O') {
            ans += i + 1 + x;
            x += 1;
        } else {
            x = 0;
        }
    }

    cout << ans;
}
