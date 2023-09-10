#include<iostream>

using namespace std;
long long arr[1500001], input;
int pisano = 1500000;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;

    
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= pisano; i++) {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1000000;
    }
    
   cout << arr[input % pisano] << "\n";
    
    return 0;
}
