#include <iostream>
#include <string>
using namespace std;


int cnt=0, p=0, s=0;
string k, ret;
int main(void) {

    cin >> k;
    for (int i = 0; i < k.size(); i++)
    {
        if (k[i] == ',') { 
            s += stoi(ret); 
            ret = "";
        }
        else {
            ret += k[i];
        }
    }
    cout << s+stoi(ret)<<'\n';
}
