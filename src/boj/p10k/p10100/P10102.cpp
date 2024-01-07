#include <iostream>
using namespace std;

int N;
string arr;
int a, b;

int main(void){
    cin >> N;
    cin >> arr;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 'A') b++;
        else a++;
    }
    if(a > b) cout << "A";
    else if(b > a) cout << "B";
    else cout << "Tie";
}
