#include <iostream>
using namespace std;

int calculateBarks(int time, int a, int b, int c, int d) {
    int barkCount = 0;
    if (time % (a + b) > 0 && time % (a + b) <= a) barkCount++;
    if (time % (c + d) > 0 && time % (c + d) <= c) barkCount++;
    return barkCount;
}

int main() {
    int a, b, c, d, p, m, n;
    cin >> a >> b >> c >> d >> p >> m >> n;

    cout << calculateBarks(p, a, b, c, d) << '\n';
    cout << calculateBarks(m, a, b, c, d) << '\n';
    cout << calculateBarks(n, a, b, c, d) << '\n';

    return 0;
}
