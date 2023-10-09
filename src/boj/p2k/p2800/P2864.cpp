#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

static int A, B;
static int mx, mn;
int main() {
    
    cin >> A >> B;
    
    int p = 1;
    while (A % p != A) {
        int cur = A % (p * 10) - A % p;
        mn += cur / p == 6 ? p * 5 : cur;
        mx += cur / p == 5 ? p * 6 : cur;
        p *= 10;
    }
    p = 1;
    while (B % p != B) {
        int cur = B % (p * 10) - B % p;
        mn += cur / p == 6 ? p * 5 : cur;
        mx += cur / p == 5 ? p * 6 : cur;
        p *= 10;
    }

    cout << mn << " " << mx;

    return 0;
}
