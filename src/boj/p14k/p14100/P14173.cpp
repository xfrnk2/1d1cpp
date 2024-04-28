#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    int x1, x2, y1, y2, a1, a2, b1, b2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    int ans = max(max(a2, x2) - min(a1,x1), max(b2, y2) - min(b1, y1));
    cout << ans * ans;
}
