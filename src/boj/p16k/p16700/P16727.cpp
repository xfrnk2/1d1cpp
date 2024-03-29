#include <iostream>
using namespace std;

int main(void) {
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    if (arr[0] + arr[3] > arr[1] + arr[2]) 
        cout << "Persepolis\n";
    else if (arr[0] + arr[3] < arr[1] + arr[2]) 
        cout << "Esteghlal\n";
    else 
        cout << ((arr[1] == arr[3]) ? "Penalty\n" : ((arr[1] < arr[3]) ? "Persepolis\n" : "Esteghlal\n"));
    return 0;
}
