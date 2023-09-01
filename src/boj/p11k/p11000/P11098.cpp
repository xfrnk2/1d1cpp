# include <iostream>
using namespace std;
int n, p;
int main(){
 
    cin >> n;
 
 
    for (int i = 0; i < n; i++){
        cin >> p;
        int a;
        string b, ans;
 
        int mx = 0;
        
        for (int j = 0; j < p; j++){
            cin >> a >> b;
            if (a > mx){
                mx = a;
                ans = b;
            }
        }
        cout << ans << endl;
    }
}
