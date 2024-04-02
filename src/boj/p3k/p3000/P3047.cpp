#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int arr[3];
    string s;

    cin >> arr[0] >> arr[1] >> arr[2] >> s;

    sort(arr, arr + 3);

    for (int i = 0; i < s.length(); i++)
    {
        cout << (s[i] == 'A' ? arr[0] : (s[i] == 'B' ? arr[1] : arr[2])) << " ";
    }
}
