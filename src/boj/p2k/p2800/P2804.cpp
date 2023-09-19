#include <iostream>
using namespace std;

int main()
{
    string strA, strB;
    int idxA, idxB;
    bool flag;
    cin >> strA >> strB;

    for (int i = 0; i < strA.length(); i++)
    {
        flag = false;
        for (int j = 0; j < strB.length(); j++)
        {
            if (strA[i] == strB[j])
            {
                idxA = i;
                idxB = j;
                flag = true;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }

    for (int i = 0; i < strB.length(); i++)
    {
        if (i == idxB)
        {
            cout << strA << '\n';
            continue;
        }
        for (int j = 0; j < strA.length(); j++)
        {
            cout << ((j == idxA) ? strB[i] : '.');   
        }
        cout << "\n";
    }
    return 0;
}
