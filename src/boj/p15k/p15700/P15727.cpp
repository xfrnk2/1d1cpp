#include <iostream>
using namespace std;

int main (void) {
    int n;
    cin>>n;
    cout << ((n % 5 == 0) ? n / 5 : n / 5 + 1);
}
