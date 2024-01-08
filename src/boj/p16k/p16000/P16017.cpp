#include<iostream>
using namespace std;
int arr[4];
int main(void) {
	for (int i = 0; i < 4; i++) {
        cin >> arr[i];
	}
    cout << ((arr[0] > 7 && arr[1] == arr[2] && arr[3] > 7) ? "ignore" : "answer") << "\n";
}
