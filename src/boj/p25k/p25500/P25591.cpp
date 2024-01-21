#include <iostream>
using namespace std;

int main(void) {
    int p1, p2, c1, c2, o, pr, q, r;
    cin >> p1 >> p2;
    c1 = 100 - p1;
    c2 = 100 - p2;

    o = 100 - (c1 + c2);
    pr = c1 * c2;

    q = pr / 100;
    r = pr % 100;

    cout << c1 << ' ' << c2 << ' ' << o << ' ' << pr << ' ' << q << ' ' << r << '\n';
    cout << o + q << ' ' << r << '\n';
}
