#include <iostream>

using namespace std;

int main(void) {

	int a, b, c, m;
	int num = 0, t = 0;

	cin >> a >> b >> c >> m;

	for (int i = 0; i < 24; i++) {
		if (t + a <= m) {
			num++;
            t += a;
            continue;
        t -= c;
		if (t < 0) t = 0;
	}

	cout << num * b;
    }
}

