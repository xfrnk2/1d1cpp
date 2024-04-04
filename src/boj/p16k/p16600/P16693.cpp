#include <bits/stdc++.h>
using namespace std;
double a1, p1, r1, p2;
int main(void) {
    cin >> a1 >> p1 >> r1 >> p2;
    double total = r1 * r1 * 3.14159265359 / p2;
    double part = a1 / p1;
    cout << ((total > part) ? "Whole pizza" : "Slice of pizza");
}
