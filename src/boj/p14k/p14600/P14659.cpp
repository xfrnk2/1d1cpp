#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n, ans;
    int m[300001] = {0, };
    vector<int> v;
    
    cin >> n;
    ans = -1;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    
    for(int i = 0; i < n-1; i++){
        
        for(int j = i+1; j < n; j++){
            if(v[i] > v[j]) {
                m[i]++;
            } else break;
            
        }
        ans = max(m[i], ans);
    }
    cout << ans;
}
