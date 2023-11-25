#include <stdio.h>

static long long int n, ans;
int main(void) {  
  scanf("%lld", &n);
  ans = 1;
  for(int i = 1; i<= n; i++){
    ans*=i;
  }
  printf("%lld", ans);
}
