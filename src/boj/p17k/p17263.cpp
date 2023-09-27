#include <iostream>

using namespace std;
int N, res = -1, input;
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (res < input)
			res = input;
	}
	cout << res;
	return 0;
}
