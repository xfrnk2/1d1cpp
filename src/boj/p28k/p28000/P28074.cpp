#include <iostream>
#include <algorithm>

using namespace std;

static string N, ans = "YES";
static int arr[5];

int main(void) {
    cin >> N;
    for(int i = 0; i < N.size(); i++){
        if(N[i] == 'M') arr[0]++;
        else if(N[i] == 'O') arr[1]++;
        else if(N[i] == 'B') arr[2]++;
        else if(N[i] == 'I') arr[3]++;
        else if(N[i] == 'S') arr[4]++;
    }
    
    for(int i = 0; i < 5; i++){
        if(!arr[i]){
            ans = "NO";
            break;
        }
    }
    cout << ans;
}
