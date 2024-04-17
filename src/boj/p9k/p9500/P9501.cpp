#include <iostream>

 

using namespace std;

int t;

int main(void) {
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, d, cnt = 0;
        cin >> n >> d;
        for (int j = 0; j < n; j++) {
            float v, f, c;
            cin >> v >> f >> c;
            cnt += (v / c) * f >= d ? 1 : 0; 
        }
        cout << cnt << "\n";
    }
}
