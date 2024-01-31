#include<iostream>
using namespace std;
int e, s, m, cnt = 0;

int main(void){

    cin >> e >> s >> m;

    while(true){
        if (cnt % 15 == e - 1 && cnt % 28 == s - 1 && cnt % 19 == m - 1){
            cout << cnt + 1;
            break;
        }
        cnt++;
    }
}
