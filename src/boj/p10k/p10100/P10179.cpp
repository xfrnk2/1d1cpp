#include <iostream>
using namespace std;
double T, price;
int main(void) {
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> price;
        printf("$%.2f\n", price*0.8);
    }
}
