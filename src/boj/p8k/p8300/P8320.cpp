#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[10001];
    int n;
    cin >> n;

    arr[1] = 1;
    arr[2] = 2;
    
    for (int i = 3; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        arr[i] = arr[i-1] + count;
    }
    
    cout << arr[n];
}
