#include <iostream>

using namespace std;

int main()
{
    int A, B, V, cnt;
    cin >> A;
    cin >> B;
    cin >> V;
    cnt = 1;
    
    cnt += (V - A) / (A - B);
    if ((V - A) % (A - B) != 0) cnt ++;
    
    
    cout << ((A >= V) ? 1 : cnt);
}
