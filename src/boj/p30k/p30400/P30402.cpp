#include <iostream>
using namespace std;

int main(void) {
    char c;
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cin >> c;
            cout << (c == 'w' ? "chunbae" : (c == 'b' ? "nabi" : (c == 'g' ? "yeongcheol" : "")));
            if (c == 'w' || c == 'b' || c == 'g')
                return 0;
        }
    }
}
