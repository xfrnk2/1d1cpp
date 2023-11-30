#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> b >> a;

	int ans = 0;
	while (0 < a && 2 <= b) {
		b -= 2;
        a--;
        ans++;
	}
	cout << ans << endl;
}
