#include <bits/stdc++.h>
using namespace std;
int n, cnt;
int main(void){
    cin >> n;
    cin.ignore();

    while(n--){
        string s;
        string ans="";
        cnt = 0;
        cin.clear();
        getline(cin,s);

        for(int i = 0; i < s.size(); i++){
            string ret = "";
            int j = i;
            while(s[j] != ' ' && j != s.size()) {
                ret += s[j++];
            }
            i = j;
            if(!cnt) {
                cnt = 1;
                ans += "god";
                continue;
            } else {
                ans += ret;
            }
        }
        cout << ans <<'\n';
    }
}
