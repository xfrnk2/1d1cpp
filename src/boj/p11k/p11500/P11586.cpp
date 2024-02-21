#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s[101];

    for (int i = 0; i < n; i++) 
        cin >> s[i];

    int k;
    cin >> k;

    if (k == 1) {
        for (int i = 0; i < n; i++) 
            cout << s[i] << endl;
    } 
    else if (k == 2) {
        for (int i = 0; i < n; i++) {
            for (int t = s[i].length() - 1; t >= 0; t--)
                cout << s[i][t];
            cout << endl;
        }
    } 
    else {
        for (int i = n - 1; i >= 0; i--) 
            cout << s[i] << endl;
    }
}
