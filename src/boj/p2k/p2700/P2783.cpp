#include <iostream>


using namespace std;

double ans = 0;
int a, b, n;
int main(void) {
	int a, b;
	cin >> a >> b;
	ans = ((double)a / b);;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		ans = ans > ((double)a / b) ? ((double)a / b) : ans;
	}
	cout << 1000 * ans << "\n";

}
