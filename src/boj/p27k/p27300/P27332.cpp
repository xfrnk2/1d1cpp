#include <bits/stdc++.h>

using namespace std;

int main(void) {

  int a, b; cin >> a >> b;
  int days = a + 7 * b;
  if (days >= 1 && days <= 30) cout << "1";
  else cout << "0";
}
