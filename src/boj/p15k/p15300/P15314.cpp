#include <iostream>

using namespace std;

static int n;

int main () {

    cin >> n;
    
    for(int i = 0; i < n / 4; i++) {
        cout << "long ";
    }
    cout << "int";
    
    return 0;
}
