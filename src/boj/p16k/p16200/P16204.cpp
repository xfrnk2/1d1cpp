#include <iostream>

using namespace std;
int n, m, k, ans;

int main(void){
    cin >> n >> m >> k;
    ans = (m > k ? k : m) + ((n - m) > (n - k) ? (n - k) : (n - m));
    cout << ans;
}
