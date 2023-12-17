#include <bits/stdc++.h>
using namespace std;
string j, f;
int n, ans;
int main(){
  cin >> j >> n;
  while(n--> 0){
    cin >> f;
    ans += ((j == f) ? 1 : 0);
  }
  cout << ans;
}
