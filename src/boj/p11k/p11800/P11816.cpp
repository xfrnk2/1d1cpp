#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string n;
    cin >> n;

    if (n.length() > 1 && n.substr(0, 2) == "0x") {
        cout << stoi(n, nullptr, 16);
    } else if (n.length() > 1 && n[0] == '0') {
        cout << stoi(n, nullptr, 8);
    } else {
        cout << n;
    }
}
