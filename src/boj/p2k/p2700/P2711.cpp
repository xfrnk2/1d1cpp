#include <bits/stdc++.h>
using namespace std;
 

int N, p;
string s;
	
int main(){
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> p >> s;
		cout << s.replace(p-1, 1, "") + "\n";
	}
}
