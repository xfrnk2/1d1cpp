#include <iostream>
#include <string>
using namespace std;
 


int main(void) {
    int T;
    cin >> T;
    cin.ignore();
    string s;
    while (T--> 0) {
        string s;
        getline(cin, s);
        s[0] -= ((s[0] >= 97 && s[0] <= 122) ? 32 : 0);
        cout << s << "\n";
    }
}
