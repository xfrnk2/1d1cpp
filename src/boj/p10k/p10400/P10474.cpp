#include <iostream>
using namespace std;

int a = 1, b = 1;
int main(void) {	
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) { 
            break;
        }
		else {
            cout << (a / b) << " " << (a % b) << " / " << b << "\n";
        }
	}
}
