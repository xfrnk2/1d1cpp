#include <iostream>
       
using namespace std;
static long long R, C, N, ans = 0;

int main(void) {
    cin >> R >> C >> N;

    ans = (R / N + (R%N ? 1 : 0)) * (C / N + (C%N ? 1 : 0)) * 1LL;
    cout << ans;
     
    return 0;
}
