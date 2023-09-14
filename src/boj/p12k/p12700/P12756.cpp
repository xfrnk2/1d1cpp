#include <iostream>
using namespace std;
int main() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    while (a2 >= 1 && b2 >= 1)
    {
        a2 -= b1;
        b2 -= a1;
    }
    cout << ((a2 < 1 && b2 < 1) ? "DRAW\n" : (a2 <= b2 ? "PLAYER B" : "PLAYER A")); 
}
