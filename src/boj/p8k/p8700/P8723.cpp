#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int arr[3];
    bool a = false, b = false;
    
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    
    if (arr[0] == arr[1] && arr[1] == arr[2])
        a = true;
    if (arr[2] * arr[2] == arr[0] * arr[0] + arr[1] * arr[1])
        b = true;
    
    if (!a && !b)
        cout << 0;
    else if (!a && b)
        cout << 1;
    else if (a && !b)
        cout << 2;
}

