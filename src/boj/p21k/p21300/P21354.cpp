#include <bits/stdc++.h>
using namespace std;
int apple, pear, axel, petra;
int main(void){
    cin >> apple >> pear;
    axel = apple * 7;
    petra = pear * 13;
    cout << (axel > petra ? "Axel" : (axel < petra ? "Petra" : "lika"));
}
