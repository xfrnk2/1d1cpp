#include <bits/stdc++.h>
using namespace std;
static double a, b;
int main(){
  cin >> a >> b;
  printf("%.20f", 1 / (1 + pow(10, ((b - a) / 400))));
}
