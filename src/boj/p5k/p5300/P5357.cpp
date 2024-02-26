#include <iostream>
using namespace std;
int n;
char t;
string s;
int main(void) {

    cin >> n;
    while (n--) {
        t = ' ';
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (t != s[i]) {
                cout << s[i];
                t = s[i];
            }
        }
        cout << '\n';
    }
}
