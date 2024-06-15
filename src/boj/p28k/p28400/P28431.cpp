#include <iostream>
#include <unordered_set>

using namespace std;

int main(void) {
    unordered_set<int> lst;
    int res = 0;

    for (int i = 0; i < 5; ++i) {
        int a;
        cin >> a;
        if (lst.count(a)) {
            res -= a;
            lst.erase(a);
        } else {
            lst.insert(a);
            res += a;
        }
    }

    cout << res;
}
