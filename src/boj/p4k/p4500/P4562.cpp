#include <iostream>
using namespace std;
static int n, x, y;
int main(void) {    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        cout << (x < y ? "NO BRAINS\n" : "MMM BRAINS\n");
    }
}
