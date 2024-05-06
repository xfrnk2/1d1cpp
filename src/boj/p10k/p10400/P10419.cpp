#include<bits/stdc++.h>
using namespace std;

int t, d;
int main(void) {
	cin >> t;
	while (t--) {
		cin >> d;
		for (int i = 1; i <= d; i++) {
			if ((i*i) + i > d) {
				cout << (i - 1) << '\n';
				break;
			}
		}
	}
}
