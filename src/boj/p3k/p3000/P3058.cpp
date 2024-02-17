#include <iostream>
using namespace std;
int main(void) {
    int T;
    cin >> T; 

    while (T--> 0) {
        int num, sum = 0, minEven = 101;
        for (int i = 0; i < 7; ++i) {
            cin >> num;
            if (num % 2 != 0 ) continue;
            
            sum += num;
            minEven = num < minEven ? num : minEven;
        }
        cout << sum << " " << minEven << "\n";
    }

}
