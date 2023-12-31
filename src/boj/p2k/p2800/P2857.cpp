#include <iostream>
#include <string>
using namespace std;


string str;
int main(void) {
	bool flag = false;
	for (int i = 1; i < 6; i++) {
		getline(cin, str);
		if (string::npos != str.find("FBI")) {
			cout << i << ' '; 
			flag = true;
		}
	}
	if (!flag) {
        cout << "HE GOT AWAY!";
    }
}
