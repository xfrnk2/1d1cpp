#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main()
{
    int ans, n, cur, minV, maxV;
    cin >> n;
    minV = INT_MAX;
    maxV = INT_MIN;
   
    for (int i = 0; i < n; i++)
    {
       cin >> cur;
       minV = min(cur, minV);
       maxV = max(cur, maxV);      
    }

    if(n == 1) {
    ans = cur * cur;
} else {
    ans = minV * maxV;
}
    
    cout << ans;
}
