#include <iostream>
using namespace std;

int n, a, b;
int main(void) {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		cout << "Case " << i << ": " << a + b << "\n";
	}
}
