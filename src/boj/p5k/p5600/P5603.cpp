#include <iostream>
#include <string>
using namespace std;

string execute(const string& s) {
    string result = "";
    int count = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
        else {
            result += to_string(count) + s[i - 1];
            count = 1;
        }
    }

    result += to_string(count) + s.back(); 
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    
    int n;
    string s;

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        s = execute(s);
    }

    cout << s << endl;

    return 0;
}
