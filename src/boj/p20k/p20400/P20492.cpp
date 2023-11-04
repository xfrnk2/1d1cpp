#include <iostream>

using namespace std;

static int n;

int main(void) {
	cin >> n;
	cout << n * 78 / 100 << ' ' << n * 8 / 10 + (n * 2 / 10) * 78 / 100;
}
