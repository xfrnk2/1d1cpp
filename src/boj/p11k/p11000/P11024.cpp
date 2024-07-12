#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <queue>
#include <cmath>
#include <cstring>
using namespace std;
int t;
int main(void) {
    cin >> t;
    cin.ignore();
    while (t--> 0) {
        string s;
        int sum = 0;
        getline(cin, s);
        string num = "";
        for (int i = 0; i < s.size(); i++) {
            s[i] == ' ' ? (sum += stoi(num), num = "") : num += s[i];
        }
        sum += num != "" ? stoi(num) : 0;
        cout << sum << '\n';
    }
}
