#include<bits/stdc++.h>
using namespace std;
static int t, n;
static vector <int> ans, arr;
static int check[1000000];

void dfs () {
    if (arr.size() > ans.size()) ans = arr;
    for (int i = arr.size() ? arr.back() + 1 : 1 ; i <= n; i ++) {
      if (check[i]) continue;
      for (int j : arr) check[i ^ j] ++;
      arr.push_back(i);
      dfs();
      arr.pop_back();
      for (int j : arr) check[i ^ j] --;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--) {
      cin >> n;
      dfs();
      arr.clear();
      cout << ans.size() << "\n";
      for(int i : ans) cout << i << " ";
      cout << "\n";
    }
}
