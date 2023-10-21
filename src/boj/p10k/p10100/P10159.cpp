#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

static int N, M;
static int arr[101][101] = { 0, };


int main() {


	cin >> N;
	cin >> M;


	for (int i = 0; i < M; i++) {
		int from, to;
		cin >> from >> to;
		arr[from][to] = 1;
		arr[to][from] = -1;

	}

	for (int k = 1; k <= N; k++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (arr[i][k] == arr[k][j] && arr[k][j] != 0) {
					arr[i][j] = arr[k][j];
				}
			}
		}
	}


	for (int i = 1; i <= N; i++) {
		int ret = -1;
		for (int j = 1; j <= N; j++) {
			ret += (arr[i][j] == 0) ? 1 : 0;

		}
		cout << ret << "\n";
	}


	return 0;
}
