#include <bits/stdc++.h>
using namespace std;
int a, b, d;
int main(){
    cin >> a >> b;
    d = a - b;
    if(d >= 0) {
        cout << "Congratulations, you are within the speed limit!";
    return 0;
    }
    
    cout << "You are speeding and your fine is $";
    if(1 <= -d && -d <= 20) cout << 100;
    else if(21 <= -d && -d <= 30) cout << 270;
    else if(-d >= 31) cout << 500;
    cout << ".";
}
