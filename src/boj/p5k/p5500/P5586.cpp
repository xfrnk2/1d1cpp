#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    cin >> s;

    int joiCount = 0, ioiCount = 0;
    int len = s.length();

    for (int i = 0; i < len - 2; i++) {
        if (s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I')
            joiCount++;
        else if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I')
            ioiCount++;
    }

    cout << joiCount << '\n' << ioiCount << endl;
}
