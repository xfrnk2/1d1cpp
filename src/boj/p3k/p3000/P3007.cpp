#include <iostream>
using namespace std;
int c, p, a;
int main(void){
    p = 1;
    a = 1;
    cin>> c;
    for(int i = 0; i < c; i++){
        if(i%2 != 0) a += 1;       
        p += a;
    }
    cout<< p;
}
