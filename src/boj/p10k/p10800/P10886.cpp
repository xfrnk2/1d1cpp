#include <iostream>

using namespace std;


static int n, input, cnt = 0; 


int main(void) {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		cnt += input;
	}
    cout << "Junhee " <<  ((cnt > n / 2) ? "is cute!" : "is not cute!");
}
