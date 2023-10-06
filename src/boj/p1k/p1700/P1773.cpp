#include <iostream>
#include <cstring>
using namespace std;

static int arr[2000001];
static int N, C;
static int cnt = 0;
static int s[100];


int main(void) {


	cin >> N >> C;

	for (int i = 0; i < N; ++i) {
		cin >> s[i];
	}

	for (int i = 0; i < N; ++i) {
		for (int j = s[i]; j <= C; j += s[i]) {
			arr[j] = 1;
		}
	}

	for (int i = 0; i <= C; ++i) {
		if (arr[i] == 1) cnt ++;
	}
	cout << cnt;
}
