#include <bits/stdc++.h>
using namespace std;
static int t;
int main() {
	cin >> t;
	cout << "Gnomes:" << "\n";
    
	while(t--) {
		vector <int> arr(3);
		for(int i = 0; i < 3; i++) cin >> arr[i];
		cout << (((arr[1] - arr[0]) * (arr[2] - arr[1]) > 0) ? "Ordered" : "Unordered") << "\n";
	}
}
