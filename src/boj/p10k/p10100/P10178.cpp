#include <iostream>
using namespace std;
int T, C, B;
int main() {
    
    cin >> T;
    while (T--> 0)
    {
        cin >> C >> B;
        cout << "You get " << C / B << " piece(s) and your dad gets "<< C % B << " piece(s)."<< "\n";
    }
}
