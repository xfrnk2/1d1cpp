#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n = 4;
    int arr[n];
    
    
	for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
	sort(arr, arr + n);
	cout << abs(arr[n-1] + arr[n-4] - arr[n-2] - arr[n-3]);
}
