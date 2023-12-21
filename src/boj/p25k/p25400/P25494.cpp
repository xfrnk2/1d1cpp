#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int t, a, b, c;
int main(void) {
    cin >> t;
    while(t--> 0){
    	cin >> a >> b >> c;
    	cout << min(a, min(b, c)) << "\n";
	}
}
