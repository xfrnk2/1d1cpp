#include <iostream>
#include <string>
using namespace std;
string str;
int main(void) {
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		str[i] -= 32;
    }
	cout << str;
}
