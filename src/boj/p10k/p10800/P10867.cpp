#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;
int main(void) {

  cin >> N;
  vector<int> arr(N);
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int prev = 0;
  for (int i =0; i < N; i++) {
    if (prev == arr[i]) continue;
    cout << arr[i] << " ";
    prev = arr[i];
  }  
}
