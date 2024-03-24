#include <iostream>
#include <string>
 
using namespace std;
int v;

int main(void) {
 

    cin>>v;
 
    for(int i=0; i<v; i++){
 
        string str;
        cin>>str;

        int len = str.length();
 
        int arr[26] = {0, };
        int cnt = 0;
 
        for(int i=0; i<len; i++){
            cnt = str[i] - 'A'; 
            arr[cnt] ++;      
        }
 
        int ans=0;
 
        for(int i = 0; i < 26; i++){
            if(arr[i] == 0){
                ans += i + 'A';   
            }
        }
        cout<< ans <<"\n";
    }
}
