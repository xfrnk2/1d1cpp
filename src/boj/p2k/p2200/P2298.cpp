#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
    int size = str.size();
	for (int i = 0; i < size; i++) {
		str[i] -= 3;
		if ('A' > str[i]) str[i] += 26;
	}

	cout << str;
    return 0;
}
