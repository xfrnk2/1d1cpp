#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0)
		return b;
	return gcd(b, a % b);
}

int n, x, y;
int main() {
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
        int gcdRes =  gcd(x, y);
		cout <<  ((x * y) / gcdRes) << " " << gcdRes << "\n";
	}
}
