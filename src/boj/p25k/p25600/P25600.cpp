#include <bits/stdc++.h>
using namespace std;

int n, a, d, g;

int main() {
    cin >> n;
    int* arr = new int[n];

    int maxScore = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> a >> d >> g;
        arr[i] = a * (d + g);
        if(a == d + g) {
            arr[i] *= 2;
        }
        if(arr[i] > maxScore) {
            maxScore = arr[i];
        }
    }

    cout << maxScore;
}
