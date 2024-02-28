#include <iostream>
using namespace std;

int N;
int main(void) {
    cin >> N;
 
    if (N == 1) {
        cout << 1;
        return 0;
    }
 
    int square = 1;
    for (int i = 0; i < 30; i++) {
        square *= 2;
        if (N == square) {
            cout << 1;
            return 0;
        }
    } 
    cout << 0;
}
