#include <iostream>

using namespace std;

int calculateTriangularNumber(int num)
{
    return num * (num + 1) / 2;
}

int main(void) {
    int testCases;
    cin >> testCases;

    for (int testCase = 0; testCase < testCases; testCase++)
    {
        int inputNum;
        cin >> inputNum;

        int result = 0;

        for (int i = 1; i <= inputNum; i++)
        {
            result += i * calculateTriangularNumber(i + 1);
        }

        cout << result << "\n";
    }
}
