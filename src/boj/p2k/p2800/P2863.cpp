#include <iostream>
using namespace std;
int A, B, C, D;

int main(void) {

    double temp, max = 0;
    int t, ans;
    cin >> A >> B;
    cin >> C >> D;
    double arr[4] = { A, B, D, C };

    for (int i = 0; i < 4; i++) {
        temp = double(arr[0] / arr[3] + arr[1] / arr[2]);

        if (temp > max) {
            max = temp;
            ans = i;
        }

        t = arr[3];
        arr[3] = arr[2];
        arr[2] = arr[1];
        arr[1] = arr[0];
        arr[0] = t;
    }
    cout << ans;
}
