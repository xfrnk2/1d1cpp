#include <iostream>
using namespace std;
int n, a, b, x, y;
int main() {
    a = b = 0;
	cin >> n;
	while (n--) {
		cin >> x >> y;
		if (x > y)	a++;
		if (x < y)	b++;
	}
	cout << a << " " << b << endl;
}
