#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int T; 
    cin >> T;
	while (T--) {
		string s1, s2; 
        cin >> s1 >> s2;
		cout << ((s1 == s2) ? "OK" : "ERROR") << "\n";
	}
}
