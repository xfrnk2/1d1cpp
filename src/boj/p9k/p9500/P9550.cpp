#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	int n, k;

	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		
        int cnt = 0;
		for (int j = 0; j < n; j++) {
		
            int temp;
            
            cin >> temp;
			while (temp >= k) {
				cnt++;
				temp -= k;
			}
		}
		cout << cnt << "\n";
	}
    return 0;
}
