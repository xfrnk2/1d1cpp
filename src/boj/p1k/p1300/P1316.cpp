#include <set>
#include <iostream>

using namespace std;

int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        set<char> s;
        string str;
        cin >> str;
        char lastest = ' ';
        bool flag = true;
        for(int j = 0; j < str.length(); j ++) {
            if (str[j] == lastest) continue;
            if (s.find(str[j]) != s.end()) {
                flag = false;
                break;
            }
            lastest = str[j];
            s.insert(str[j]);
            
        }
        ans += flag ? 1 : 0;
    }
    cout << ans;
    
}
