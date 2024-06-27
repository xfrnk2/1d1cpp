#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    cin.ignore();  

    int d = 0, p = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);

        if (s == "D") {
            d++;
        } else {
            p++;
        }
        if (abs(d - p) > 1) {
            cout << d << ":" << p;
            break;
        }
    }
    if (abs(d - p) <= 1) {
        cout << d << ":" << p;
    }
}
