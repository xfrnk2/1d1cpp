#include <iostream>
#include <set>
using namespace std;
static set<int> s;

int main(void) {
  
    int n, m, k;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> k;
        s.insert(k);
    }

    for (int i = 0; i < m; i++) {
        cin >> k;
        if (s.find(k) == s.end()) {
            s.insert(k);
            continue;
        }
        s.erase(k);
    }

    cout << s.size();  
}
