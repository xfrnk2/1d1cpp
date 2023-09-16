#include <iostream>
using namespace std;
long long N;
long long sum = 0;
int main(){
  cin >> N;
  for(long long i=1; i<N; i++){ 
    sum += i*N + i;
  }
  cout << sum << "\n";

  return 0;
}
