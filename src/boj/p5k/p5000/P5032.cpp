#include <iostream>
using namespace std;
int e, f, c, ans = 0;
int main(void) {
    
    cin >> e >> f >> c;
    int cola = e + f;\
    while (cola >= c)
    {
        ans += cola / c;
        cola = cola % c + cola / c;
    }
    cout << ans << '\n';
}

