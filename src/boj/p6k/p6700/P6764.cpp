#include <iostream>
using namespace std;

int depth[4];

int main() {
    for (int i = 0; i < 4; ++i) {
        cin >> depth[i];
    }

    if (depth[0] > depth[1] && depth[1] > depth[2] && depth[2] > depth[3]) {
        cout << "Fish Diving";
    } else if (depth[0] < depth[1] && depth[1] < depth[2] && depth[2] < depth[3]) {
        cout << "Fish Rising";
    } else if (depth[0] == depth[1] && depth[1] == depth[2] && depth[2] == depth[3]) {
        cout << "Fish At Constant Depth";
    } else {
        cout << "No Fish";
    }

    return 0;
}
