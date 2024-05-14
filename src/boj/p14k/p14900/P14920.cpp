#include <iostream>
using namespace std;

long long N; 
int ans;
int main(void) {
    ans = 1;
    cin >> N;
    while (N > 1) {
        ans++;
        if (N & 1) {
            N = 3 * N + 1;
        } else { 
            N /= 2;
        }
    }
    cout << ans;
}
