#include <iostream>
using namespace std;
int main(void) {
	int N, ans = 0;
	cin >> N;

	for (int i = 0; i < N; i++)	{
        int x;
		cin >> x;
		if (x % 2 == 1) ans--;
		else ans++;
	}
	if (ans > 0) cout << "Happy";
	else cout << "Sad";
}
