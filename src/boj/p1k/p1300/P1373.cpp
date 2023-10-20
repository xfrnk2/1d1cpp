#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int size, remainder;
    string str;
    
    cin >> str;
    size = str.size();
    remainder = size % 3;
    if (remainder == 1) {
        cout << str[0];
    } 
    if (remainder == 2) {
        cout << (str[0] - '0') * 2 + (str[1] - '0');
    }
    for (int i = remainder; i < size; i += 3) {
        cout << (str[i] - '0') * 4 + (str[i + 1] - '0') * 2 + (str[i + 2] - '0');
    }
}
