#include <iostream>
#include <string>

using namespace std;
int l, r, t;
string n;
int main(void) {
	string n;
	cin >> n;
	for (int i = 0; i < n.size(); i++) {
		if (n[i] == '0') t = 1;
        if (n[i] != '@') continue;
        if (t == 0) l++;
        if (t == 1) r++;
	}
	cout << l << " " << r;
}
