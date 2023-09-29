#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
static int n, ans = 0; 
static int arr[1001];
int main() {

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n-1; i++)
        for (int j = i + 1; j <= n; j++)
            ans = max(ans, abs(arr[i] - arr[j]));
    cout << ans;
}
