#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

static int n;
static int* arr;
static vector<int> list;

int upperBound(int target) {
    int left = 0, right = list.size();
    while (left < right) {
    
        int mid = (left + right) / 2;
        if (list[mid] <= target) {
            left = mid + 1;
        }
        else {
            right = mid;
        }

    }
    return right;
}

int main() {
    
    cin >> n;
    
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    list.push_back(arr[0]);
    for (int i = 1; i < n; i++) {
        int tmp = upperBound(arr[i]);
        if ((int)list.size() == tmp) {
            list.push_back(arr[i]);
        }
        else {
            list[tmp] = arr[i];
        }
    }
    cout << n - list.size();
    return 0;
}
