#include <iostream>
#include <cstring>

using namespace std;

static string x;
static int ans = 1;

int main(void) {
    cin >> x;
    for(int i = 0; i < x.size(); i++){
        if (x[i] == ',') {
            ans++;
        }
    }
    cout << ans;
}
