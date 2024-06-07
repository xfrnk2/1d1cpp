#include <iostream>
using namespace std;

int main(void) {
    int a, x, b, y, T;
    cin >> a >> x >> b >> y >> T;

    x = (T > 30) ? a + (T - 30) * x * 21 : a;
    y = (T > 45) ? b + (T - 45) * y * 21 : b;
    
    cout << x << ' ' << y;
}
