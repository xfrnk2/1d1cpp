#include <bits/stdc++.h>

using namespace std;
int n, x; 
int main(void) {

  cin >> n >> x;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  long long ans = 1e18;
  for (int i = 0; i < n - 1; i++)
    ans = min(ans, 1LL * x * (arr[i] + arr[i + 1]));

  cout << ans;
}
