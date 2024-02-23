#include <bits/stdc++.h>
using namespace std;
int n;
int main(void) {
    vector<int> v;

    for (int i = 0; i < 3; i++) {

        cin >> n;

        v.push_back(n);

    }

    sort(v.begin(), v.end());
    cout << v[1];
}
