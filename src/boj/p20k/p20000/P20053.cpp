#include <bits/stdc++.h>

using namespace std;

int t, n, mn, mx, MAX = 0x3f3f3f3f;

int main(void){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    
  cin >> t;
  while(t--){
    cin >> n;
    mn = MAX;
    mx = -MAX;
    for(int i = 0; i < n; i++) {
      int input;
      cin >> input;
      mn = min(mn, input);
      mx = max(mx, input);
    }
    cout << mn << ' ' << mx << '\n';
  }
}
