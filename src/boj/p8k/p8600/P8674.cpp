#include <bits/stdc++.h>
using namespace std;
long long arr[2];
int main(void){
    cin >> arr[0] >> arr[1];
    cout << ((!(arr[0] % 2) || !(arr[1] % 2)) ? 0 : min(arr[0], arr[1]));
}
