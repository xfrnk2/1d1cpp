#include <bits/stdc++.h>
using namespace std;
string s, q = "DKSH";
int main(void) {

  int ans = 0;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    bool f = false;
    for (int j = 0; j < 4; j++) {
      if (s[i + j] != q[j]) {
        f = true;
        break;
      }
    }
    if (f == true) continue;
    ans++;
  }
  cout << ans;
}
