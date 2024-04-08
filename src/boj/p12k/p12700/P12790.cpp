#include <iostream>
using namespace std;

int main(void) {
    int tc;
    cin >> tc;

    int arr[8];
    for (int j = 0; j < tc; j++) {
        for (int i = 0; i < 8; i++)
            cin >> arr[i];

        arr[0] += arr[4];
        arr[1] += arr[5];
        arr[2] += arr[6];
        arr[3] += arr[7];

        arr[0] = max(1, arr[0]);
        arr[1] = max(1, arr[1]);
        arr[2] = max(0, arr[2]);

        cout << arr[0] * 1 + arr[1] * 5 + arr[2] * 2 + arr[3] * 2 << "\n";
    }
}
