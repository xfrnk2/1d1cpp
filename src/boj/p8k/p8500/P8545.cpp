#include <bits/stdc++.h>
using namespace std;
string str;
int main(void){
    cin >> str;
    for(int i = str.size() - 1; i >= 0; i--) {
        cout << str[i];
    }
}
