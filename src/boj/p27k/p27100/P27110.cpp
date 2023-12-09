#include <iostream>
using namespace std;
int N, ans=0;
int main(void) {
    
    int x;
    cin >> N;
    for(int i = 0; i < 3; i++){
        cin >> x;
        ans += x > N ? N : x;
    }
    cout << ans;
}
