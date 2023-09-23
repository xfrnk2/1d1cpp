#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main(){
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> a >> b >> c;

  cout << min(a, b / 2 + c);

}
