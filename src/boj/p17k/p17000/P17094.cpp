#include <iostream>
using namespace std;
int n, a = 0, b = 0;
string str;

int main(void) {
    cin >> n >> str;

    for (char ch : str) {
        if (ch == '2') a++;
        else if (ch == 'e') b++;
    }

    if (a == b) cout << "yee";
    else cout << (a > b ? '2' : 'e');
}
