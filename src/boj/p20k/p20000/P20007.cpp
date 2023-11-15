#include <bits/stdc++.h>
#include <iostream>

using namespace std;
static int N, M, X, Y;
static vector<pair<int, int>> adj[1001];
static pair<int, int> d[1001];

bool cmp(pair<int, int> &a, pair<int, int> &b) { return a.second < b.second; }

void initD() {
  for (int i = 0; i < N; i++) {
    d[i].second = INT_MAX;
  }
}

void dijkstra() {

  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;
  initD();
  pq.push({Y, 0});
  d[Y].first = Y;  // 목적지
  d[Y].second = 0; // 비용
  while (!pq.empty()) {
    int cur = pq.top().first;
    int cost = pq.top().second;
    pq.pop();

    if (cost > d[cur].second)
      continue;

    for (pair<int, int> target : adj[cur]) {
      int next = target.first;
      int nextCost = target.second + cost;
      if (nextCost < d[next].second) {
        d[next].first = next;
        d[next].second = nextCost;
        pq.push({next, nextCost});
      }
    }
  }
}

int cal() {
  int maxDis = X;
  int ret = 1;
  sort(d, d + N, cmp);
  for (int i = 0; i < N; i++) {
    if (X < d[i].second * 2)
      return -1;
    if (maxDis < d[i].second * 2) {
      ret++;
      i--;
      maxDis = X;
      continue;
    }
    maxDis -= (d[i].second * 2);
  }
  return ret;
}

int main(void) {

  cin >> N >> M >> X >> Y;
  int _from, _to, _cost;
  for (int i = 0; i < M; i++) {
    cin >> _from >> _to >> _cost;
    adj[_from].push_back({_to, _cost});
    adj[_to].push_back({_from, _cost});
  }
  dijkstra();
  int res = cal();
  cout << res;
}
