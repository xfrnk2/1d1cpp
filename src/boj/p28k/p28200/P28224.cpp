#include <bits/stdc++.h>

using namespace std;
int total, price;
int main(void) {
  cin >> total >> price;
  for (int i = 1; i < total; i++) {
    int day;
    cin >> day;
    price += day;
  }
  cout << price;
}
