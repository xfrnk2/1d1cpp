#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << ((i % 2 == 0) ? "* " : " *");
		cout << "\n";
	}
}
