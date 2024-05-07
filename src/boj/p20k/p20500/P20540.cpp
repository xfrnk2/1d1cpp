#include <bits/stdc++.h>

using namespace std;
string mbti, ans;
int main(void){
    cin >> mbti;
    for(int i = 0; i < mbti.size(); i++){

        ans += (mbti[i] == 'E') ? 'I' :
               (mbti[i] == 'I') ? 'E' :
               (mbti[i] == 'S') ? 'N' :
               (mbti[i] == 'N') ? 'S' :
               (mbti[i] == 'T') ? 'F' :
               (mbti[i] == 'F') ? 'T' :
               (mbti[i] == 'P') ? 'J' :
                                   'P';
    }
    cout << ans;
}
