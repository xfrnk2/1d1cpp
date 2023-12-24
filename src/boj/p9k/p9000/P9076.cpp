#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;
int n;
int main(void) {

    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> arr(5);
        for (int j = 0; j < 5; j++) {
            cin >> arr[j];
        }
        sort(arr.begin(), arr.end());

        if (4 <= arr[3] - arr[1]) {
            cout << "KIN";
        } else {
        int ret = 0;
        for (int j = 1; j < 4; j++) ret += arr[j];
        cout << ret;
        }
        cout << "\n";
    }
}
