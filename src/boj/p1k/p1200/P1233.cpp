#include <iostream>
using namespace std;
int main() {
	int arr[100] = { 0, };
    
    int a, b, c, ans, mx;
	cin >> a >> b >> c;

	for (int i = 1; i <= a; i++) 
		for (int j = 1; j <= b; j++)
			for (int k = 1; k <= c; k++)
				arr[i + j + k]++;
    
	mx = ans = 0;
	for (int i = 1; i <= 80; i++)
		if (arr[i] > mx)
			mx = arr[i], ans = i;
	cout << ans;
}
