#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    long long factorial = 1;
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    long long weeks = factorial / (7 * 24 * 60 * 60);

    cout << weeks;

    return 0;
}
