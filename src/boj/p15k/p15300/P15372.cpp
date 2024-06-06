#include <iostream>

using namespace std;

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        long long num;
        cin >> num;
        cout << num * num << "\n";
    }
}
