#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    if (a < b) return gcd(a, b%a);
    return gcd(b, a%b); 
}

int main() {
    long long a, b, res;
    cin >> a >> b;
    res = gcd(a, b);
    cout << res * (a / res) * (b / res);
}
