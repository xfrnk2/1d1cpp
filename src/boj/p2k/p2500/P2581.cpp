#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main(void) {
    int m, n;
    cin >> m >> n;

    vector<int> primes;

    for (int i = m; i <= n; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    if (primes.empty()) {
        cout << "-1";
    } else {
        int sum = accumulate(primes.begin(), primes.end(), 0);
        cout << sum << "\n" << primes[0];
    }
}
