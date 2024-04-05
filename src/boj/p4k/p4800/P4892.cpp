#include <iostream>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;
    while (true) {
        int n0;
        cin >> n0;
        if (n0 == 0) break;
        string str = (n0 % 2 == 0) ? "even" : "odd";
        int n4 = (n0 % 2 == 0) ? (n0 * 3 / 2) / 3 : ((n0 * 3 + 1) / 2) / 3;
        cout << ++n << ". " << str << ' ' << n4 << '\n';
    }
}
