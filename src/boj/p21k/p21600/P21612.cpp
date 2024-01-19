#include <bits/stdc++.h>
using namespace std;
int val;

int main(void){
    cin >> val;
    val = 5 * val - 500;
    cout << val + 100 << "\n" << (val < 0 ? 1 : val == 0 ? 0 : -1);
}
