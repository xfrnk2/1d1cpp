#include <iostream>
using namespace std;

int main(void) {
    int n;
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        cin >> n;
        sum += n;
    }
    cout << sum * 5;
}
