#include <iostream>
using namespace std;
int n;
int ans = 0;
int main(void) {

	cin >> n;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			ans += i + j;
		}
	}
	cout << ans;
}
