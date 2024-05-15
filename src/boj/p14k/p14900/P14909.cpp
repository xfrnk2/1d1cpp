#include <iostream>
using namespace std;
int ans, a;
int main(void) {
	
	while (true) {

		cin >> a;
		if (cin.eof() == 1) { 
            break; 
        }
        ans += (a>0 ? 1 : 0);
	}
	cout << ans;
}
