#include <bits/stdc++.h>
using namespace std;

string s1, s2;	
int a[26] = {0, };
int b[26] = {0, };
int ans = 0;
	
int main(void) {

	cin >> s1;
	for (int i = 0; i < s1.length(); i++) {
		a[s1[i] - 'a']++;
	}
    cin >> s2;
	for (int i = 0; i < s2.length(); i++) {
		b[s2[i] - 'a']++;
	}
	
	for (int i = 0; i < 26; i++) {
		if (a[i] != b[i]) ans += abs(a[i] - b[i]);
	}
	cout << ans;
}
