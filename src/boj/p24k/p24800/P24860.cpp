#include <bits/stdc++.h>
using namespace std;
long long vk, jk, va, ja, vh, dh, jh, lightChainK, lightChainA, heavyChain;
int main(void){
  cin >> vk >> jk >> va >> ja >> vh >> dh >> jh;
  lightChainK = vk * jk;
  lightChainA = va * ja;
  heavyChain = vh * dh * jh;
  cout << heavyChain * (lightChainA + lightChainK);
}
