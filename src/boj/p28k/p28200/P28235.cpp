#include <iostream>
#include <string>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; 
  cin >> s;

  cout << (s == "SONGDO" ? "HIGHSCHOOL" :
           s == "CODE" ? "MASTER" :
           s == "2023" ? "0611" :
           s == "ALGORITHM" ? "CONTEST" : "");

  return 0;
}
