#include <iostream>
#include <string>
using namespace std;

string toBinary(long long n) {
    if (n == 0) {
        return "";
    }
    return toBinary(n / 2) + to_string(n % 2);
}

int main(void) {
    long long N;
    cin >> N;
    cout << toBinary(N) << "\n";
}
