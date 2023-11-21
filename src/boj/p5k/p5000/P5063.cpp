#include <iostream>
using namespace std;
    static int n;

    int main(void) {
          
        cin >> n;
        for (int i = 0; i < n; i++) {
            int r, e, c;

            cin >> r >> e >> c;

            if (r < e - c) {
                cout << "advertise";
            }
            else if (r == e - c) {
                cout << "does not matter";
            }
            else {
                cout << "do not advertise";
            }
            cout << "\n";
        }
}
