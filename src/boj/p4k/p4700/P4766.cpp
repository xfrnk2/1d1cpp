#include <iostream>
#include <iomanip>
using namespace std;
double n, x = 0;

int main(void) {
    cin >> n;
    while (1) {
        cin >> x;
        if (x == 999)
            break;
        cout << fixed << setprecision(2) << x - n << endl;
        n = x;
    }
}
