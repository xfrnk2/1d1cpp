#include <bits/stdc++.h>
using namespace std;

int N, M;
int numbers[8];


void printNumbers() {
  for (int i = 1; i <= M; i++) {
     cout << numbers[i] << " ";
  }
  cout << "\n";
}

void rec(int num, int p) {
  for (int i = 1; i <= N; i ++) {
      numbers[p] = i;
      if (p == M) {
        printNumbers();
        continue;
      }
    
      rec(num, p + 1);
  }
}



int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> N >> M;
  
  rec(1, 1);
 
}
