#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
typedef long long ll; 

int main() {


	int n, b, c;
    cin >> n; 
	vector <int> arr(n); 
	for (int i = 0; i < n; i++){ 
        cin >> arr[i]; 
    }
	cin >> b >> c; 
	ll ans = n;
	for (int i = 0; i < n; i++) {
		arr[i] -= b;
		if (arr[i] > 0) {
		ans += arr[i] / c + (arr[i] % c != 0 ? 1 : 0); 
        }
	}
	cout << ans; 
}
