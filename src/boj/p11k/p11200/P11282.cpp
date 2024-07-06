#include <iostream>
#include <string>
using namespace std;
int n; 
string str;
int main(void){
	cin >> n;
	n += 3071;
	str.push_back(n/4096+234);
	str.push_back(n/64%64+128);
	str.push_back(n%64+128);
	cout << str;
}
