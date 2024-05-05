#include <bits/stdc++.h>

using namespace std;

int main(void) {

  int h, m; cin >> h >> m;

  int start = 9 * 60,
      submit = h * 60 + m;

  int ans = submit - start;

  cout << ans << "\n";
}
