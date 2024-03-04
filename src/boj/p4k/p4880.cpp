#include <iostream>
using namespace std;
int arr[3];
int main(void) {
    while (1) {
        cin >> arr[0] >> arr[1] >> arr[2];
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
            break;
        if (arr[1] - arr[0] == arr[2] - arr[1] && arr[1] - arr[0] != 0)
            cout << "AP " << arr[1] - arr[0] + arr[2]<< '\n';
        else
            cout << "GP " << arr[1] / arr[0] * arr[2] << '\n';
    }
}
