#include <bits/stdc++.h>

using namespace std;

int main(void) {

  const string io1 = "fdsajkl;", io2 = "jkl;fdsa";
  const string oi1 = "asdf;lkj", oi2 = ";lkjasdf";
  const string s = "asdfjkl;";
  const string r = ";lkjfdsa";

  string userInput; cin >> userInput;

  cout << (userInput == io1 || userInput == io2 ? "in-out" :
           userInput == oi1 || userInput == oi2 ? "out-in" :
           userInput == s ? "stairs" :
           userInput == r ? "reverse" :
           "molu") << '\n';
}
