#include <bits/stdc++.h>
using namespace std;
int t, a, b, ans = 0x3f3f3f3f;
int main(){
  cin >> t;
  while(t-->0){
    cin >> a >> b;
    ans = (a <= b) ? min(ans,b) : ans;
  }
  cout << ((ans == 0x3f3f3f3f) ? -1 : ans);
}
