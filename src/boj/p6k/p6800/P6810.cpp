#include <iostream>
using namespace std;
int arr[3], ans = 91;

int main(void) {
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];

		if (i == 1) {
			arr[i] *= 3;
		}
		ans += arr[i];
	}
	cout << "The 1-3-sum is "  << ans;
}
