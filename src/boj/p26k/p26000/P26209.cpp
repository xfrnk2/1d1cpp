#include <bits/stdc++.h>

using namespace std;

int main(void) {
  bool res = false;
  for (int i = 0; i < 8; i++) {
    int bit; cin >> bit;

    if (bit == 9) res = true;
  }

  cout << (res ? "F\n" : "S\n");
}
