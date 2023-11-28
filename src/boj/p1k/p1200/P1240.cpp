#include <iostream>
#include <queue>
#include <vector>

using namespace std;
vector<pair<int, int>> graph[1001];

static int N, M;

int bfs(int a, int b) {
  queue<pair<int, int>> q;
  bool visit[1001] = {
      0,
  };
  q.push(make_pair(a, 0));
  visit[a] = 1;

  while (!q.empty()) {

    pair<int, int> cur = q.front();
    q.pop();
    for (pair<int, int> nxt : graph[cur.first]) {
      if (visit[nxt.first])
        continue;
      if (nxt.first == b)
        return cur.second + nxt.second;
      visit[cur.first] = 1;
      q.push(make_pair(nxt.first, cur.second + nxt.second));
    }
  }
  return 0;
}

int main() {
  cin >> N >> M;
  for (int i = 1; i < N; i++) {
    int from, to, cost;
    cin >> from >> to >> cost;
    graph[from].push_back(make_pair(to, cost));
    graph[to].push_back(make_pair(from, cost));
  }

  while (M--) {
    int a, b;
    cin >> a >> b;
    int res = bfs(a, b);
    cout << res << "\n";
  }
}
