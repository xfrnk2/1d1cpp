#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

static int n;
static vector<int> prevVisit, tree;
static vector<vector<int>> list;
static string color;
static stack<int> stk;


long getNutella(int idx, int prev) {
	if (tree[idx] > 0 && color.at(idx - 1) == 'R') return tree[idx];
	if (color.at(idx - 1) == 'R') stk.push(idx);
	prevVisit[idx] = prev;
	long res = 0;

	for (int i = 0; i < list[idx].size(); i++) {
		char curColor = color.at(list[idx][i] - 1);
		if (prevVisit[list[idx][i]] == prev || curColor == 'B') continue;
		
		long cnt = getNutella(list[idx][i], prev);
		res += 1 + cnt;
		if (color.at(idx - 1) == 'B') {
			while (!stk.empty()) {
				tree[stk.top()] = cnt;
				stk.pop();
			}
		}
	}

	return res;
}


int main() {


	cin >> n;
	list.resize(n + 1);
	prevVisit.resize(n + 1);
	tree.resize(n + 1);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		list[a].push_back(b);
		list[b].push_back(a);
	}

	cin >> color;
	long ans = 0;
	for (int i = 0; i < color.size(); i++) {

		if (color[i] == 'B') {
			ans += getNutella(i + 1, i + 1);
		}
	}
	cout << ans;



	return 0;
}
