#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

static map<char, int> m;
static map<string, int> dir;
static pair<int, int> king, stone;
static int cnt = 0;
static int dx[] = {0, 0, 1, -1, -1, -1, 1, 1};
static int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

void init() {
  int i = 0;
  for (char c = 'A'; c <= 'H'; c++) {
    m.insert({c, i++});
  }
  dir.insert({"R", 0});
  dir.insert({"L", 1});
  dir.insert({"B", 2});
  dir.insert({"T", 3});
  dir.insert({"RT", 4});
  dir.insert({"LT", 5});
  dir.insert({"RB", 6});
  dir.insert({"LB", 7});
}

int main(void) {
  init();
  string kp, sp;
  cin >> kp >> sp >> cnt;

  king.second = m.at(kp.at(0));
  king.first = 8 - (kp.at(1) - '0');
  stone.second = m.at(sp.at(0));
  stone.first = 8 - (sp.at(1) - '0');

  string input;
  int cur;
  while (cnt--) {
    cin >> input;
    cur = dir.at(input);
    int nx = king.first + dx[cur];
    int ny = king.second + dy[cur];
    if (nx < 0 || nx > 7 || ny < 0 || ny > 7)
      continue;
    if (nx == stone.first && ny == stone.second) {
      int sx = stone.first + dx[cur];
      int sy = stone.second + dy[cur];
      if (sx < 0 || sx > 7 || sy < 0 || sy > 7)
        continue;
      king.first = nx;
      king.second = ny;
      stone.first = sx;
      stone.second = sy;
    } else {
      king.first = nx;
      king.second = ny;
    }
  }
  cout << (char)(king.second + 65) << 8 - king.first << "\n";
  cout << (char)(stone.second + 65) << 8 - stone.first;
}
