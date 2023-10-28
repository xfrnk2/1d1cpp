#include <iostream>

using namespace std;

static int n, m, a, b;
static int arr[101] = { 0, };

int main(void) {
  cin >> n >> m;

  for(int i = 1; i <= n; i++) {
    arr[i] = i;
  }

  for(int i = 0; i < m; i++) {
    cin >> a >> b;
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
  }

  for(int i = 1; i <= n; i++) {
    cout << arr[i] << ' ';
  }
}
