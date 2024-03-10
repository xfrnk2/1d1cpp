#include <cstdlib>
#include <cmath>

#include <iostream>

using namespace std;
int bX, bY, dX, dY, jX, jY, b, d;

int main(void){    
    cin >> bX >> bY >> dX >> dY >> jX >> jY;
    b = max(abs(jX - bX), abs(jY - bY));
    d = abs(jX - dX) + abs(jY - dY);
    if (b < d) cout << "bessie";
    else if (b > d) cout << "daisy";
    else cout << "tie";
}
