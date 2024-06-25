#include <iostream>
using namespace std;
int num;
int arr[6];
int main(void) {
    cin >> num;
    
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;
    int t = 0;
    for (int i = 0; i < 6; i++) {
        t += arr[i] / a;
        if (arr[i] % a != 0) {
            t++;
        }
    }
    cout << t << "\n";
    cout << num / b << " " << num % b << "\n";
}
