#include <iostream>
using namespace std;
int n, m, k;
int main(void) {
    
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> n >> m;
        cout<<n * m / 2 << "\n";
    }
}
