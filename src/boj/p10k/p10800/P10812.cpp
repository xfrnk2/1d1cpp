#include <iostream>
#include <algorithm>

using namespace std;
int n, m, a, b, c;
int arr[100]; 

int main(void) {

    cin >> n >> m;

    for(int i = 0; i < 100; i++) arr[i] = i + 1;
    
    while(m--) {
        cin >> a >> b >> c;
        rotate(arr + a - 1, arr + c - 1, arr + b);
    }
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
}
