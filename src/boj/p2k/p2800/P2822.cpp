#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
	return a.second < b.second;
}

pair<int, int> arr[8];
int ans = 0;
int main(void) {

	for (int i = 0; i < 8; i++)	{
		cin >> arr[i].first; 
		arr[i].second = i;
	}

	sort(arr, arr + 8);

	for (int i = 3; i < 8; i++)	ans += arr[i].first;
	sort(arr + 3, arr + 8, compare);
	cout << ans << '\n';
	for (int i = 3; i < 8; i++) cout << (1 + arr[i].second) << " ";
}
