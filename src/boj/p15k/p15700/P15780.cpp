#include <iostream>
using namespace std;
int n, k, sum = 0;
int main(void) {
    cin >> n >> k;
    while (k--) {
        int input;
        cin >> input;
        if (input % 2 == 0) {
            sum += input / 2;
        }
        else {
            sum += input / 2 + 1;
        }
    }
    cout << ((sum >= n) ? "YES" : "NO");
}
