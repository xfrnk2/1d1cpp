#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int N,K, ans = 0;
int main(void) {
    cin >> N >> K;
    for(int i = 1; i <= K; i++) {
        string s = to_string((i*N));
        reverse(s.begin(),s.end());
        ans = max(ans,stoi(s));
    }
    cout << ans;
}
