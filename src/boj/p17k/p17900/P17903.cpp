#include <bits/stdc++.h>
using namespace std;
int n, m, arr[21][21];
int main(void){
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << ((n >= 8) ? "satisfactory" : "unsatisfactory");
}
