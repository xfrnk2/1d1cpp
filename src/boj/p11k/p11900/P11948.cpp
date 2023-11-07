#include <iostream>

#include <algorithm>

using namespace std;

static int arr1[4];

static int arr2[2];

int main(void) {
	for (int i = 0; i < 4; i++) cin >> arr1[i];

	for (int i = 0; i < 2; i++) cin >> arr2[i];

	sort(arr1, arr1 + 4);
	sort(arr2, arr2 + 2);

	cout << arr1[2] + arr1[3] + arr1[1] + arr2[1];
}
