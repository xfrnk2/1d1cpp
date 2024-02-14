#include <bits/stdc++.h>
using namespace std;
double v;
int main(void){
  
  while(true){
    cin >> v;
    if(v == 0) break;
    printf("%.2f\n", 1 + v + pow(v,2) + pow(v,3) + pow(v,4));
  }
}
