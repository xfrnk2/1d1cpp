#include <iostream>
using namespace std;
int arr1[10000] = {0, };
int arr2[10000] = {0, };
long long int ans = 0;
string a, b;

int main() {

	cin >> a >> b;

	for (int i = 0; i < a.length(); i++) {
		arr1[i] = a[i] - 48;
	}
	for (int i = 0; i < b.length(); i++) {
		arr2[i] = b[i] - 48;
	}
	
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < b.length(); j++) {
			ans += arr1[i] * arr2[j];
		}
	}
	cout << ans;
}
