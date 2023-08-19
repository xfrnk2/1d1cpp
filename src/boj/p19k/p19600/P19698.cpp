#include <iostream>
using namespace std;
int main() {
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    int ans = (w / l) * (h / l);
    cout << ( n < ans ? n : ans);
    return 0;
}
