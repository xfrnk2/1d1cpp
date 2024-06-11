#include <iostream>
using namespace std;

int main(void) {
    long long int arr[68] = {1, 1, 2, 4};
    for (int j = 4; j < 68; j++) {
        arr[j] = arr[j-1] + arr[j-2] + arr[j-3] + arr[j-4];
    }
    int t, a;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a;
        cout << arr[a] << "\n";
    }
}
