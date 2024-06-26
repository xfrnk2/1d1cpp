#include <iostream>
using namespace std;
int n, k;
int main(void) {

    cin >> n >> k;
    int cost = 0;
    int available = k + 60;

    if (n <= available) {
        cout << n * 1500;
    } else {
        cout << available * 1500 + (n - available) * 3000;
    }
}
