#include <iostream>
using namespace std;
int n, m, l;
int ballCnt[1001];

int main(void) {

    cin >> n >> m >> l;

    int throwCnt = 0, cur = 0;
    while (true) {
        ballCnt[cur]++;
        if (ballCnt[cur] == m) {
            cout << throwCnt << '\n';
            break;
        }

        if (ballCnt[cur] % 2) {
            cur = (cur + l) % n;
        } else {
            cur = (n + (cur - l)) % n;
        }

        throwCnt++;
    }
}
