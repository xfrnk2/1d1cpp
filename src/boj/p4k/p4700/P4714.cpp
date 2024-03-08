#include <bits/stdc++.h>
using namespace std;
double x;
int main(void){
    while(true){
        cin >> x;
        if(x < 0) break;
        printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", x, x * 0.167);
    }
}
