#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int N;
    char B;
    cin >> N >> B;

    int result = 0;
    for (int i = 0; i < 4 * N; i++)
    {
        string temp;
        cin >> temp;

        if (temp[0] == 'A')
        {
            result += 11;
        }
        else if (temp[0] == 'K')
        {
            result += 4;
        }
        else if (temp[0] == 'Q')
        {
            result += 3;
        }
        else if (temp[0] == 'J')
        {
            if (temp[1] == B)
            {
                result += 20;
            }
            else
            {
                result += 2;
            }
        }
        else if (temp[0] == 'T')
        {
            result += 10;
        }
        else if (temp[0] == '9')
        {
            if (temp[1] == B)
            {
                result += 14;
            }
        }
    }

    cout << result;
}
