#include <bits/stdc++.h>

using namespace std;
char c;
int main(void) {

  map<char, string> map = {
    {'M', "MatKor"},
    {'W', "WiCys"},
    {'C', "CyKor"},
    {'A', "AlKor"},
    {'$', "$clear"}
  };

  cin >> c;
  cout << map[c];
}
