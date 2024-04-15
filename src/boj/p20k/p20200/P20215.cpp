#include <bits/stdc++.h>
using namespace std;
double w,h;
int main(void){
    cin >> w >> h;
    printf("%.9f", (w + h) - sqrt(w*w + h*h));
}
