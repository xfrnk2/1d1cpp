#include <iostream>
#include <cmath>
using namespace std;

int sum = 0; 

int main() {
	for (int i = 0; i < 10; i++) {
        int val;
		cin >> val;
		if (abs(100 - sum) < abs(100 - (sum + val)))
			break;
		sum += val;
	}
	cout << sum;
    return 0;
}
