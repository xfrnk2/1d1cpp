#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

static string str;

int main(void) {
    cin >> str;
    cout << str.size() + count(str.begin(), str.end(), '_') * 5 + count(str.begin(), str.end(), ':');
}
