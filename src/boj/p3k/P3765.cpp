#include <iostream>
#include <cstring>

using namespace std;


int main(void) {
    string str;
    while (true) {
        getline(cin, str);
        if (cin.eof()) break;
        cout << str << "\n";
    }
}
