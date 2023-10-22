#include <iostream>
#include <algorithm>
using namespace std;

static int N, A, B, C, D;
int main(void) {
	cin >> N >> A >> B >> C >> D;

    A = (N / A + (N % A ? 1 : 0)) * B
    C = (N / C + (N % C ? 1 : 0)) * D
	int result = min(A, C);
    cout << result;
}
