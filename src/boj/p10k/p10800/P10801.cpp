
#include <iostream>
 
using namespace std;
 
int main(void) {
 
    int a[10];
    int b[10];
 
    int at = 0, bt = 0;
 
    for(int i=0; i<10; i++){
        cin >> a[i];
    }
 
    for(int i=0; i<10; i++){
        cin >> b[i];
    }
 
    for(int i=0; i<10; i++){
        if(a[i]>b[i]){
            at ++;
            continue;
        }
        if(b[i]>a[i]){
            bt ++;
        }
 
    }
    cout << (( at > bt) ? "A" : (bt > at) ? "B" : "D");
}

