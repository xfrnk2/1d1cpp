#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long lv, wv, le, we;
        cin >> lv >> wv >> le >> we;
        
        if (lv * wv == le * we) {
            cout << "Tie" << endl;
        } else if (lv * wv > le * we) {
            cout << "TelecomParisTech" << endl;
        } else {
            cout << "Eurecom" << endl;
        }
    }
}
