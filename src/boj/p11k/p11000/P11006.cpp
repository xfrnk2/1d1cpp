#include <iostream>
using namespace std;

int main(void) {
    int n, m, u, t, tc; 
    
    
    cin >> tc;
    
    while (tc --) {
        cin >> n >> m;
        
        u = 2 * m - n;
        t = m - u;
        
        cout << u << " " << t << "\n";
    }    
}

