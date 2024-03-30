#include <iostream>
using namespace std;

int s[3], e[3], st, et;
char colon;
int main(void) {
    cin >> s[0] >> colon >> s[1] >> colon >> s[2];
    cin >> e[0] >> colon >> e[1] >> colon >> e[2];

    st = s[2] + s[1] * 60 + s[0] * 3600;
    et = e[2] + e[1] * 60 + e[0] * 3600;

    
    cout << ((st > et) ? (24 * 3600 - st + et) : (et - st));
}
