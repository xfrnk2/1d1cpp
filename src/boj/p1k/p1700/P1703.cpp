#include <bits/stdc++.h>
using namespace std;
int main(void) {
    vector<int> arr;
    while (true) {
        int input;
        cin >> input;
        if (!input) break;
        arr.resize(input * 2);
        int ans = 1;
        for (int i = 0; i < 2 * input; i++) cin >> arr[i];
        for (int i = 0; i < input; i++) {
            int sf = arr[i * 2];
            int p = arr[i * 2 + 1];
            ans = ans * sf - p;
        }
        cout << ans << '\n';
    }
}
