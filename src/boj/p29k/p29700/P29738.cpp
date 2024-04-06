#include <iostream>
#include <string>
using namespace std;
int T, N;
int main(void) {

    cin >> T;
    
    for (int i = 0; i < T; ++i) {
        cin >> N;
        string round = "Round 1";
        if (N <= 25) {
            round = "World Finals";
        } else if (N <= 1000) {
            round = "Round 3";
        } else if (N <= 4500) {
            round = "Round 2";
        }
        
        cout << "Case #" << i + 1 << ": " << round << "\n";
    }
}
