#include <iostream>
#include <algorithm>


using namespace std;


int main() {
    int N, M, T, ans = 0;

    cin >> N >> M >> T;
    int* arr = new int[T + 1];
    for (int i = 0; i <= T; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        int v;
        cin >> v;
        arr[v - M]++;
        arr[v + M] -= v + M < T ? 1 : 0;
    }
    for (int i = 1; i < T; i++) 
        arr[i] += arr[i - 1];
    

    for (int i = 0; i < T; i++) 
        ans += arr[i] == 0 ? 1 : 0;
    

    cout << ans;
    return 0;
}
