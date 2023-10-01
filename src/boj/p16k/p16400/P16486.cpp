#include <iostream>
using namespace std;
static double PI = 3.141592;
static double d1, d2;

int main() {
    cin >> d1 >> d2;
    printf("%.6f\n", d1 * 2 + PI * d2 * 2);
}
