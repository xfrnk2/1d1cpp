#include <iostream>
using namespace std;

int MOD = 4;
int p1, p2;
int main(void) {
    cin >> p1 >> p2;

    p1--, p2--;

    int x1 = p1 / MOD, y1 = p1 % MOD;
    int x2 = p2 / MOD, y2 = p2 % MOD;

    int distance = abs(x1 - x2) + abs(y1 - y2);

    cout << distance;
}
