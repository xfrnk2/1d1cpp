#include <iostream>
using namespace std;
int n;
int ans = 0;
int main(void) {    
    while (cin >> n) {
        ans += n;
    }
    cout << ans;
}
