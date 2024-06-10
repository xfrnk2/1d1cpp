#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;

    int arr1[] = {1, 2, 3, 3, 4, 10};
    int arr2[] = {1, 2, 2, 2, 3, 5, 10};

    for (int i = 0; i < t; i++) {
        int team1 = 0, team2 = 0, temp;

        for (int j = 0; j < 6; j++) {
            cin >> temp;
            team1 += arr1[j] * temp;
        }

        for (int j = 0; j < 7; j++) {
            cin >> temp;
            team2 += arr2[j] * temp;
        }

        cout << "Battle " << i + 1 << ": ";
        cout << (team1 > team2 ? "Good triumphs over Evil\n" : team1 < team2 ? "Evil eradicates all trace of Good\n" : "No victor on this battle field\n");
    }
}
