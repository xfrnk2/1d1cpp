#include<iostream>
using namespace std;
static int n;
static string pw;
int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> pw;
		if (pw.length() >= 6 && pw.length() <= 9) cout << "yes" << endl;
		else cout << "no"<< endl;
	}
}
