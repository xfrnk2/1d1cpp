#include <iostream>
using namespace std;
    int N, arr[33], ans;
int main() {

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    ans += arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i-1] != arr[i]-1)
            ans += arr[i];
    }
    cout << ans << endl;
}
