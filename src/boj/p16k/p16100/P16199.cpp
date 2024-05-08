#include<iostream>
using namespace std;
int y1, y2, m1, m2, d1, d2, ans1, ans2, ans3;

int main(void) {
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    
    if (m1 < m2) {
        ans1 = y2 - y1;
    } else if (m1 == m2 && d1 <= d2) {
        ans1 = y2 - y1;
    } else {
        ans1 = y2 - y1 - 1;
    }
    
    ans2 = y2 - y1 + 1;
    ans3 = y2 - y1;
    
    cout << ans1 << "\n" << ans2 << "\n" << ans3;
}
