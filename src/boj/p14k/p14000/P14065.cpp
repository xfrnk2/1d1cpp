#include <iostream>

using namespace std;
int main(void) {
    double m;

    cin >> m;

    double ans = 100.00 / ((1.609344 / 3.785411784) * m);

    printf("%.6lf\n", ans);
}
