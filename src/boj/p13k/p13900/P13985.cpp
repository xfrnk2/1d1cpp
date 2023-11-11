#include <iostream>
#include <string>
using namespace std;

static char arr[10];
int main() {
    cin.getline(arr, 10);
    cout << (((arr[0] - '0') + (arr[4] - '0') == (arr[8] - '0')) ? "YES" : "NO");
}

