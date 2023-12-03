#include <iostream>
#include <string>
using namespace std;

int N;
int field[101][101];
int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

bool isValid(int x, int y) {
  int nx, ny;
  for (int k = 0; k < 8; k++) {
    nx = x + dx[k];
    ny = y + dy[k];
    if (field[nx][ny] != -1 && field[nx][ny] == 0)
      return false;
  }
  return true;
}

void apply(int x, int y) {
  int nx, ny;
  for (int k = 0; k < 8; k++) {
    nx = x + dx[k];
    ny = y + dy[k];
    if (field[nx][ny] == -1)
      continue;
    field[nx][ny]--;
  }
}

int main() {
  cin >> N;
  if (N <= 2) {
    cout << 0;
    return 0;
  }
  for (int i = 0; i < N; i++) {
    string line;
    cin >> line;
    for (int j = 0; j < N; j++) {
      field[i][j] = line[j] == '#' ? -1 : line[j] - '0';
    }
  }
  int ans = 0;
  for (int i = 1; i < N - 1; i++) {
    for (int j = 1; j < N - 1; j++) {
      if (5 <= N && 2 <= i && i < N - 2 && 2 <= j && j < N - 2) {
        ans++;
        continue;
      }

      if (isValid(i, j)) {
        ans++;
        apply(i, j);
      };
    }
  }
    
  cout << ans;  
}
