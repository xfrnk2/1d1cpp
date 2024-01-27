#include <iostream>
#include <cctype> 

using namespace std;

int main(void) {
    string s;
    while (getline(cin, s)) {
        int lc = 0, uc = 0, dc = 0, sc = 0;
        
        for (char ch : s) {
            if (islower(ch)) {
                lc++;
            } else if (isupper(ch)) {
                uc++;
            } else if (isdigit(ch)) {
                dc++;
            } else if (isspace(ch)) {
                sc++;
            }
        }
        
        cout << lc << " " << uc << " " << dc << " " << sc << '\n';
    }
}
