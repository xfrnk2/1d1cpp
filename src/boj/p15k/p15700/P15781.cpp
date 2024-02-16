#include <iostream>
using namespace std;
int n, m;
int main(void) {

	cin >> n >> m;

	int max_helmet = 0, max_vest = 0;
	while (n --) {
		int h;
		cin >> h;
		if (h > max_helmet) {
            max_helmet = h; 
        }
	}
	while (m --) {
		int v;
		cin >> v;
		if (v > max_vest) {
            max_vest = v; 
        }
	}
	cout << max_helmet + max_vest << "\n";
}
