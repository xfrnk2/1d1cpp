#include <iostream>
using namespace std;

int main (void) {
    int N, T, C, P;
    cin >> N >> T >> C >> P;
    cout << (N-1) / T * C * P << "\n";
}
