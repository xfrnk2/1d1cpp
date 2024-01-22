#include <iostream>
using namespace std;

int HEIGHT = 4;
int n, h, v;

int main(void)
{

    cin >> n >> h >> v;

    int result = h * v;
    result = max(result, h * (n - v));
    result = max(result, (n - h) * v);
    result = max(result, (n - h) * (n - v));
    result *= HEIGHT;

    cout << result;
}

