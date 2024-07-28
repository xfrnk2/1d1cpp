#include <iostream>
#include <string>
 
using namespace std;
int n;
string a;
int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int result = 0;
        cin >> a;
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < a.length(); k++) {
                if (stoi(a.substr(k, 1)) == j) {
                    result++;
                    break;
                }
            }
        }
 
        cout << result << "\n";
    }
}
