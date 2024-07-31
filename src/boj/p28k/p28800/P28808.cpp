#include <bits/stdc++.h>
using namespace std;
int n, m; 
int main(void) {
  cin >> n >> m;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    string s; 
    cin >> s;
    if (s.find('+') != string::npos)
      ans++;
  }
  cout << ans << "\n";
}
