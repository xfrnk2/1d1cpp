#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main(void) {
    int cnt, idx, movCnt;
    string input;

    getline(cin, input);
    stringstream ss(input);
    ss >> cnt >> idx >> movCnt;

    for (int i = 0; i < movCnt; i++) {
        int a, b;
        cin >> a >> b;
        idx = (a == idx) ? b : (b == idx) ? a : idx;
    }

    cout << idx;
}
