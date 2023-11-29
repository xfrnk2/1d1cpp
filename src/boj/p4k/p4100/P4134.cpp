#include <cmath>
#include <iostream>
typedef long long ll;
using namespace std;

int T;

bool isPrime(ll num) {
  if (num <= 1)
    return false;
  for (int i = 2; i < int(sqrt(num)) + 1; i++) {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main() {
  cin >> T;
  ll n;
  for (int i = 0; i < T; i++) {
    cin >> n;
    while (!isPrime(n++)) {
    }
    cout << n - 1 << "\n";
  }
}
