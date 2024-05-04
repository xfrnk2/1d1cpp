#include <iostream>
#include <algorithm>
using namespace std;
string n;
int main(void) {
    cin >> n;
    sort(n.begin(), n.end(), greater<char>());
    cout << n;
}
